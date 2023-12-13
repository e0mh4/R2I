import sys
import os
import argparse
import json
import re
from pycparser import c_ast, parse_file

PREDEF = {
    'excluded': ['FileAST', 'Typename', 'TypeDecl', 'IdentifierType', 'FuncDef'],
    'loops': ['For', 'While', 'DoWhile'],
    'mem_functions': ['scanf', 'gets', 'fgets', 'free', 'memset', 'write', 'fwrite', 'read', 'fread']
}

FEATURES_HDR = [
    '_func_name', 'loc', 'lol', 'token',
    'local', 'label', 'goto', 'cast', 'asm', 'assignment', 'operator',
    'loop_dowhile', 'loop_for', 'loop_while', 'loop_total',
    'loop_depth', 'if_in_loop',
    'prop_loop_for', 'prop_loop_while', 'prop_loop_dowhile',
    'branch_case', 'branch_if', 'branch_ternary', 'branch_total',
    'prop_branch_if', 'prop_branch_case', 'prop_branch_ternary',
    'cond_depth', 'if_depth', 'strcmp_bare', 'strcmp_not', 'bitwise',
    'fix', 'ref_direct', 'ref_structured',
    'comma', 'undefined', 'unknown', 'unknown_op',
    'unimplemented', 'invalid_jump', 'invalid_form', 'invalid_ir',
    'invalid_funccall', 'broken_dowhile',
]

INIT_OPTION = {
    'Name': True,
    'Decl': False,
    'Init': False,
    'If': False,
    'FuncID': False,
    'ExprList': False,
    'BinaryOp': False,
    'Cond': 0,
    'IfNested': 0,
    'LoopNested': 0,
    'Cast': False,
    'CastNested': True,
    'MemRef': True,
    'FuncCall': False,
    'FuncCmpU': False,
    'FuncCmpB': False,
}

INVALID_TYPES = ['undefined', 'code', 'passwd', 'BADSPACEBASE', 'unkint', 'unkbyte10', '_UNKNOWN']

class Code(c_ast.Node):
    def __init__(self, ast, filename, catalog):
        self.ast = ast
        self.filename = filename
        self.catalog = catalog
        self.functions = []
        self.scores = []

    def show(self):
        self.ast.show(attrnames=True, nodenames=True)

        for (func, score) in self.scores:
            print('\n', func, score)
    
    def extract(self):
        for (order, func) in self.ast.children():
            if (func.__class__.__name__ == 'FuncDef'):
                score = {
                    'loc': 0,
                    'lol': 0,
                    'token': 0,
                    'local': 0,
                    'label': {'defined': set(), 'used': set()},
                    'goto': 0,
                    'cast': 0,
                    'asm': 0,
                    'assignment': 0,
                    'operator': 0,
                    'loop': {'for': 0, 'while': 0, 'dowhile': 0, 'total': 0},
                    'prop_loop': {'for': 0, 'while': 0, 'dowhile': 0},
                    'branch': {'if': 0, 'case': 0, 'ternary': 0, 'total': 0},
                    'if_in_loop': 0,
                    'cond_depth': [0],
                    'if_depth': [0],
                    'loop_depth': [0],
                    'prop_branch': {'if': 0, 'case': 0, 'ternary': 0},
                    'strcmp_': {'bare': 0, 'not': 0},
                    'bitwise': 0,
                    'fix': {'pre': 0, 'post': 0},
                    'ref': {'direct': 0, 'structured': 0},
                    'comma': 0,
                    'undefined': 0,
                    'unknown': 0,
                    'unknown_op': 0,
                    'unimplemented': 0,
                    'unimplemented_cond': 0,
                    'invalid_jump': 0,
                    'invalid_form': 0,
                    'invalid_ir': 0,
                    'invalid_funccall': 0,
                    'broken_dowhile': 0,
                }
                Code.walk(func, score, INIT_OPTION, order)
                
                funcName = score.pop('_func_name')
                if self.catalog is not None:
                    if funcName == 'nullsub_1':
                        funcName = 'null_'
                    elif re.search(r'^(thunk_.+|j_.+)', funcName):
                        funcName = 'thunk_'
                    elif funcName in ['thread_entry', 'start_routine']:
                        funcName = 'pthread_'
                    elif funcName.startswith('_obstack'):
                        funcName = funcName[1:]

                    funcCode = None
                    for func in self.catalog:
                        if func['funcName'].startswith(funcName):
                            funcName = func['funcName']
                            funcCode = func['decompiledFuncCode']
                            if funcName == 'main':
                                funcName = 'main_' + func['funcStartAddr'][2:]
                            self.catalog.remove(func)
                            break
                    if funcCode is None:
                        if not funcName in self.functions:
                            print('[-] %s not found in %s' % (funcName, self.filename[:-1]+'json'), file=sys.stderr)
                        continue
                    else:
                        def filterOut(line):
                            if line == '':
                                return False
                            if line.startswith('#'):
                                return False
                            if line.endswith('*/') and line.lstrip().startswith('/*'):
                                return False
                            return True           
                        lines = [x for x in funcCode.split('\n') if filterOut(x)]
                        score['loc'] = len(lines)
                        score['lol'] = max(len(re.split('[\s,:;\(\)\{\}]+', line.split('//', 1)[0].split('/*', 1)[0].strip())) for line in lines)

                    score['label'] = len(score['label']['defined'] - score['label']['used'])
                    score['cond_depth'] = max(score['cond_depth'])
                    score['if_depth'] = max(score['if_depth'])
                    score['loop_depth'] = max(score['loop_depth'])
                    score['unimplemented'] += score.pop('unimplemented_cond')
                    
                    score['loop']['total'] = score['loop']['for'] + score['loop']['while'] + score['loop']['dowhile']
                    if score['loop']['total'] != 0:
                        score['prop_loop']['for'] = score['loop']['for'] / score['loop']['total']
                        score['prop_loop']['while'] = score['loop']['while'] / score['loop']['total']
                        score['prop_loop']['dowhile'] = score['loop']['dowhile'] / score['loop']['total']

                    score['branch']['total'] = score['branch']['if'] + score['branch']['case'] + score['branch']['ternary']
                    if score['branch']['total'] != 0:
                        score['prop_branch']['if'] = score['branch']['if'] / score['branch']['total']
                        score['prop_branch']['case'] = score['branch']['case'] / score['branch']['total']
                        score['prop_branch']['ternary'] = score['branch']['ternary'] / score['branch']['total']

                    total_fixes = score['fix']['pre'] + score['fix']['post']
                    score['fix'] = 0 if total_fixes == 0 else score['fix']['pre'] / total_fixes

                self.functions.append(funcName)
                self.scores.append((funcName, score))
        
    @staticmethod
    def walk(node, score, option, role):
        token = node.__class__.__name__
        detect = option.copy()
        
        if token not in PREDEF['excluded']:
            score['token'] += 1

            if detect['Name'] and token == 'Decl':
                score['_func_name'] = getattr(node, 'name', role)
                detect['Name'] = option['Name'] = False

            elif token == 'Compound':
                detect['Decl'] = True

                if role == 'iffalse':
                    score['branch']['if'] += 1

                    score['if_depth'].append(detect['IfNested'])

            elif detect['Decl'] and token == 'Decl':
                score['local'] += 1
                detect['Init'] = True

            elif detect['Init'] and role == 'init':
                score['assignment'] += 1

            elif token == 'Goto':
                score['goto'] += 1

                score['label']['used'].add(getattr(node, 'name', ''))
            elif token == 'Label':
                score['label']['defined'].add(getattr(node, 'name', ''))

            elif token == 'Cast':
                if detect['Cast']:
                    if option['CastNested']:
                        score['cast'] += 1
                        option['CastNested'] = False
                else:
                    detect['Cast'] = True

            elif token in PREDEF['loops']:
                score['loop'][token.lower()] += 1
                detect['If'] = True

                detect['LoopNested'] += 1
                if detect['LoopNested'] > score['loop_depth'][-1]:
                    score['loop_depth'][-1] += 1
                else:
                    score['loop_depth'].append(detect['LoopNested'])

            elif token == 'If':
                score['branch']['if'] += 1
                detect['BinaryOp'] = True

                if detect['If']:
                    score['if_in_loop'] += 1
                    option['If'] = detect['If'] = False

                if role != 'iffalse':
                    detect['IfNested'] += 1
                if detect['IfNested'] > score['if_depth'][-1]:
                    score['if_depth'][-1] += 1
                else:
                    score['if_depth'].append(detect['IfNested'])
            
            elif token in ['Case', 'Default']:
                score['branch']['case'] += 1

            elif token == 'TernaryOp':
                score['branch']['ternary'] += 1
                score['operator'] += 1

            elif token in ['ArrayRef', 'StructRef']:
                score['ref']['structured'] += 1

            elif token == 'UnaryOp':
                op = getattr(node, 'op', '')

                if op == '*':
                    score['ref']['direct'] += 1

                elif op == '&' and detect['MemRef']:
                    score['ref']['direct'] += 1

                elif op in ['p++', 'p--']:
                    score['fix']['pre'] += 1
                    score['operator'] += 1
                elif op in ['++', '--']:
                    score['fix']['post'] += 1
                    score['operator'] += 1

                elif op == '!':
                    detect['FuncCmpU'] = True
                    score['operator'] += 1
                
                elif op == '~':
                    score['bitwise'] += 1
                    score['operator'] += 1
                        
            elif token == 'BinaryOp':
                score['operator'] += 1
                op = getattr(node, 'op', '')

                if op in ['&', '|', '^', '<<', '>>']:
                    score['bitwise'] += 1
                
                elif detect['BinaryOp'] and op in ['&&', '||']:
                    role = 'cond[and][or]'

                elif op == '==':
                    detect['FuncCall'] = True

            elif token == 'Assignment':
                score['assignment'] += 1

                op = getattr(node, 'op', '')
                if op != '=':
                    score['operator'] += 1

                    if op in ['&=', '|=', '^=', '<<=', '>>=']:
                        score['bitwise'] += 1

            elif token == 'FuncCall':
                detect['FuncID'] = True
                detect['ExprList'] = False

            elif detect['FuncID'] and token == 'ID' and role == 'name':
                name = getattr(node, 'name', '')

                if name == 'invalid_funccall':
                    score['invalid_funccall'] += 1

                elif '__asm' in name:
                    score['asm'] += 1

                elif name in ['strcmp', 'strncmp']:
                    if detect['FuncCmpU']:
                        score['strcmp_']['not'] += 1
                    elif not detect['FuncCall']:
                        score['strcmp_']['bare'] += 1
                    else:
                        option['FuncCmpB'] = True
                
                elif name in PREDEF['mem_functions']:
                    option['MemRef'] = False
                option['FuncID'] = False
            
            elif token == 'ID':
                name = getattr(node, 'name', '').lower()
                if name in score.keys():
                    score[name] += 1

            elif detect['ExprList'] and token == 'ExprList':
                score['comma'] += 1
                detect['ExprList'] = False
        
        if token == 'IdentifierType':
            types = getattr(node, 'names', [])
            for _type in types:
                if _type in INVALID_TYPES:
                    score['undefined'] += 1
        
        elif role == 'cond' and token != 'FuncCall':
            detect['ExprList'] = True

            value = getattr(node, 'value', 'NaN')
            if not (value.isnumeric() and float(value)):
                option['If'] = False

        if token != 'If' and role != 'cond[and][or]':
            detect['BinaryOp'] = False
        
        for (child_role, child) in node.children():
            Code.walk(child, score, detect, child_role)

            child_op = getattr(child, 'op', '')
            if role == 'cond[and][or]' and child_op not in ['&&', '||']:
                detect['Cond'] += 1

            elif detect['FuncCmpB'] and token == 'BinaryOp':
                if child.__class__.__name__ == 'FuncCall':
                    continue
                
                elif getattr(node, 'op', '') == '==' and \
                    child.__class__.__name__ == 'Constant' and \
                    getattr(child, 'value', '') == '0':
                    score['strcmp_']['not'] += 1
                else:
                    score['strcmp_']['bare'] += 1
        
        if role == 'cond[and][or]':
            option['Cond'] = detect['Cond']
        
        elif token == 'If':
            score['cond_depth'].append(detect['Cond'])
        
        elif token == 'FuncCall' and detect['FuncCall']:
            option['FuncCmpB'] = detect['FuncCmpB']
    
    def save(self, path):
        def _write_hdr(f):
            for feature in sorted(FEATURES_HDR):
                f.write('%s, ' % feature)
            f.write('\n')

        target_name = os.path.join('extract', path, self.filename[:-1]+'csv')
        with open(target_name, "w") as f:
            _write_hdr(f)
            for (func, score) in self.scores:
                f.write('%s, ' % func)
                for k in sorted(score.keys()):
                    if isinstance(score[k], dict):
                        for x in sorted(score[k]):
                            f.write('%s, ' % score[k][x])
                    else:
                        f.write('%s, ' % score[k])
                f.write('\n')

def extract(path, filename, debug, save):
    target_name = os.path.join('dataset', path, 'syntax_correction', filename) if not debug else filename
    ast = parse_file(target_name, use_cpp=True,
            cpp_path='gcc',
            cpp_args=['-E', r'-Ipycparser/utils/fake_libc_include'])
    catalog = parse_json(filename, path) if not debug else None
    code = Code(ast, filename, catalog)
    code.extract()
    
    if debug:
        code.show()
    elif save:
        code.save(path)
    return code.scores

def parse_json(filename, path):
    target_name = os.path.join('dataset', path, 'json', filename[:-1]+'json')
    with open(target_name, 'r') as f:
        return json.load(f)['funcInfo']

if __name__ == '__main__':
    os.chdir(os.path.dirname(sys.path[0]))
    
    parser = argparse.ArgumentParser(usage='extractor.py [-h] [-d | -s] [-p path] filename')
    parser.add_argument('filename', type=str)
    parser.add_argument('-p', '--path', action='store', default='',
                            help='set path to which the code can be found')
    parser.add_argument('-d', '--debug', action='store_true', default=False,
                            help='run program in debug mode')
    parser.add_argument('-s', '--save', action='store_true', default=False,
                            help='save the program execution result into a file')
    args = parser.parse_args()
    if args.debug and args.save:
        parser.print_usage()
    
    extract(args.path, args.filename, args.debug, args.save)
