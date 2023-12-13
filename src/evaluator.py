import sys
import argparse
import numpy as np
import pandas as pd
import os
import math
from copy import deepcopy

from extractor import FEATURES_HDR
FEATURES_GROW = ['ref_structured', 'strcmp', 'fix',
                 'prop_branch_case', 'prop_branch_ternary',
                 'prop_loop_for', 'prop_loop_while']
FEATURES_WEIGHT = {}

class R2I():
    def __init__(self, targets):
        self.targets = targets
        self.r2 = targets.index('radare2') if 'radare2' in targets else None
        self.features = dict()
        self.W = []     # Weight
        self.C = dict() # Single feature bag for all functions
        self.B = dict() # A group of feature bags each for functions in unique binary
        self.R = []     # Rank

    def collect_features(self, w):
        """ Collect all extracted features into dictionary
        """
        if not os.path.isfile('aggregated.csv'):
            print("[-] Not found: aggregated.csv")
            sys.exit()
        data = pd.read_csv('aggregated.csv', header=0, delimiter=',')
        
        for dv in data.values:
            func = (dv[1], dv[2])
            if func not in self.features:
                self.features[func] = {}
            if dv[1] not in self.B:
                self.B[dv[1]] = []
            self.features[func].update({dv[0]: list(dv[:-1])})
        self.C = deepcopy(self.features)
        
        # Initalize weights with given weight group name
        for feature in FEATURES_HDR[1:]:
            FEATURES_WEIGHT[feature] = 0
        self.W = pd.Series(FEATURES_WEIGHT).sort_index()
        
        weight = pd.read_csv(f'{sys.path[0]}/weight.csv', header=0, delimiter=',')
        if w not in weight.columns[1:]:
            print('[-] Evaluation cannot be proceeded due to invalid weight %s' % w)
            sys.exit()
        w = weight.columns.get_loc(w)
        for dv in weight.values:
            self.W[dv[0]] = dv[w]

    def evaluate(self, is_debug=False):
        """ Compute R2I (Relative Readability Index)
        """
        # Write header
        C_col_names = ['decompiler', 'binary', 'address'] + sorted(FEATURES_HDR[1:])
        f = open('r2i.csv', 'w')
        f.write(','.join(C_col_names)+',r2i\n')

        """ TODO: should be modified
        Example of Matrix D
            address  ninja  ghidra  idapro  radare2  retdec
        0   0x400970      0       1       1        1       1
        1   0x4009a0      0       1       0        0       1
        2   0x4009e0      0       0       1        0       1
        3   0x400a10      0       0       1        0       1
        ...
        26  0x4029d0      1       1       1        1       1
        27  0x402ad0      1       1       1        1       1
        28  0x402dd0      0       1       0        0       1
        """

        # Collect functions identified by all target decompilers
        for func in sorted(self.features.keys()):
            fully_identified = len(self.features[func].keys()) == len(self.targets)
            if fully_identified:
                self.C[func] = pd.DataFrame(self.C[func].values(), columns=C_col_names)
            else:
                del self.C[func]
        
        print("[+] Successfully sieved common functions...")

        """ TODO: should be modified
        Example of Matrix C
            decompiler address  token  goto  cast  loop_for  loop_while  loop_dowhile  if_in_loop  long_if  long_arg  ternary_in_return  strcmp_bare  strcmp_not  bitwise  fix_pre  fix_post  ref_direct  ref_structured  local
        0       ghidra  0x400970      0     0     0         0           0             0           0        0         0                  0            0           0        0        0         0           0               0      5
        1       idapro  0x400970      0     0     0         0           0             0           0        0         0                  0            0           0        1        0         0           0               0      7
        2      radare2  0x400970      0     0     0         0           1             0           1        0         0                  0            0           0        0        3         0           0               0     37
        3       retdec  0x400970      0     0     0         0           0             0           0        0         0                  0            0           0        1        0         0           0               0      7
        4       ghidra  0x4009a0      0     0     0         0           0             0           0        0         0                  0            0           0        0        0         0           0               0      5
        ..         ...       ...    ...   ...   ...       ...         ...           ...         ...      ...       ...                ...          ...         ...      ...      ...       ...         ...             ...    ...
        117     retdec  0x402ad0      1    61     0         0          17            10          57        1         0                  0            4           2       63        0         0           0               0    956
        118     ghidra  0x402dd0      0     1     0         0           0             0           1        0         1                  0            0           0        2        1         0           0               0     36
        119     retdec  0x402dd0      2     4     0         1           0             0           2        0         0                  0            1           0        4        0         0           0               0     46
        120     ghidra  0x402e40      0     0     0         0           0             0           0        0         0                  0            0           0        0        0         0           0               0      5
        121     retdec  0x402e40      0     0     0         0           0             0           1        0         0                  0            0           0        0        0         0           0               0      7
        """
        for func in self.C.keys():
            c = self.C[func].copy().reset_index(drop=True)
            indices = c.filter(['decompiler', 'binary', 'address'], axis=1)
            c = c.drop(['decompiler', 'binary', 'address'], axis=1)
            w = self.W.copy()
            
            # Remove a column that should not be considered
            for feature in FEATURES_HDR[1:]:
                f_max, f_min = c[feature].max(), c[feature].min()
                    
                # If relative values are meaningless, drop that column
                if f_max - f_min == 0 or feature in ['branch_case', 'branch_if', 'branch_ternary', 'loop_dowhile', 'loop_for', 'loop_while']:
                    c = c.drop(feature, axis=1)
                    w = w.drop(feature)
                    continue
                
                # Always set local of radare2 as "max"
                if feature == 'local' and self.r2:
                    c.at[self.r2, feature] = f_max
                
                # Caluate R2I formula using remaining feature values
                diff = c[feature] - c[feature].min()
                c[feature] = diff.apply(lambda x: math.exp(-1 * math.log(x + 1)))
                c[feature] = 1 - c[feature] if feature in FEATURES_GROW \
                            else c[feature]
            
            # Weight adjustment due to the dropped features so that the weight sum must be 1
            c = c.mul(w / sum(w))
            
            # To check the resulting matrices on terminal, use is_debug = True
            if is_debug:
                print("\n[+] @%s in %s" % indices[2], indices[1])
            
            # Add R2I column to save it later
            r2i = []
            for idx in range(len(indices)):
                decompiler = indices['decompiler'][idx]
                fa = indices['address'][idx]
                r2i.append(c.sum(axis='columns')[idx])
                if is_debug:
                    print("\tr2i(%s): %.4f" % (decompiler, r2i[idx]))
            r2i = pd.DataFrame({'r2i': r2i})
            
            # Find decompilers' ranks with regard to each function
            func_ranks = {}
            for decompiler in self.targets:
                func_ranks[decompiler] = 0
            scores = list(r2i['r2i'])
            sorted_scores = sorted(scores, reverse=True)
            for rank, score in enumerate(sorted_scores):
                rank = sorted_scores[:rank+1].index(score)
                found = scores.index(score)
                decompiler = indices['decompiler'][found]
                scores[found] = None
                func_ranks[decompiler] = rank+1
            self.R.append(list(func) + list(func_ranks.values()))

            indices['r2i'] = r2i['r2i']
            self.B[func[0]].append(indices)
            
            c = self.C[func].copy()
            c['r2i'] = r2i['r2i']
            c.to_csv(f, index=False, header=False)
        print("[+] Successfully saved feature & r2i values: r2i.csv")
        f.close()
        
        for bin in self.B.keys():
            if not self.B[bin]:
                continue
            bin_path = os.sep.join(['bin', bin.split('_')[-1] + '.csv'])
            with open(bin_path, 'w') as f:
                pd.concat(self.B[bin], axis=0).to_csv(f, index=False)
        print("[+] Successfully saved evaluation on each binary")

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('-t', '--targets', nargs='+', required=True,
                            help='specify targets to relatively evaluate')
    parser.add_argument('-w', '--weight', action='store', help='specify weight for evaluation')
    args = parser.parse_args()
    
    r2i = R2I(args.targets)
    r2i.collect_features(args.weight)
    r2i.evaluate()

    os.remove('aggregated.csv')
