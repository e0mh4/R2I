import os
import sys
import pandas as pd
import argparse
from extractor import FEATURES_HDR

class Features():
    def __init__(self, targets):
        self.decompilers = targets
        self.scores = []
    
    def process(self, data, target, filename):
        data.insert(0, '_decompiler', target)
        data.insert(1, '_binary', filename.split('-')[0])
        self.scores.append(data)

    def process_stripped(self, data, target, filename):
        funcs = []
        for i, func in enumerate(data.values):
            if func[0].startswith('fts_') or func[0].startswith('obstack_'):
                func[0] = func[0].replace('_', '')
            try:
                funcname = '0x' + func[0].split('_')[1].lower().lstrip('0').zfill(6)
                funcs.append(funcname)
            except:
                funcs.append(func[0])
        data['_func_name'] = funcs
        data.insert(0, '_decompiler', target)
        data.insert(1, '_binary', filename[:-4])
        self.scores.append(data)

    def collect(self, stripped):
        """ Collect all feature scores in a single bag
        """
        for decompiler in self.decompilers:
            for filename in os.listdir(decompiler):
                data = pd.read_csv(f'{decompiler}/{filename}', header=0, delimiter=',')
                if stripped:
                    self.process_stripped(data, decompiler, filename)
                else:
                    self.process(data, decompiler, filename)
        
        self.scores = pd.concat(self.scores)
        print('Total function detections:', len(self.scores.index))
        self.scores.drop_duplicates(inplace=True)
        print('After dropping duplicates:', len(self.scores.index))

    def save(self, experiment):
        target_name = os.path.join(os.path.dirname(sys.path[0]), 'eval', experiment, 'aggregated.csv')
        with open(target_name, 'w') as f:
            f.write('_decompiler,_binary,_func_name,'+','.join(sorted(FEATURES_HDR[1:]))+',\n')
            self.scores.sort_values(by=['_binary','_func_name'], inplace=True)
            self.scores.to_csv(f, header=False, index=False)

    def show_stats(self):
        count = self.scores.iloc[:, :3]

        print('\nDetections per # of decompilers:')
        print(count.groupby(by=['_binary', '_func_name']).count()['_decompiler'].value_counts())
        
        count['rate'] = count.groupby(by=['_binary', '_func_name'])['_decompiler'].transform('count')
        for decompiler in self.decompilers:
            dec_count = count.loc[count['_decompiler'] == decompiler]
            print(f'\nTotal detections of decompiler {decompiler}:', len(dec_count.index))
        
            print(f'Detect rate of decompiler {decompiler}:')
            print(dec_count.groupby(by=['rate']).count()['_decompiler'] / len(dec_count.index))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('experiment', type=str)
    parser.add_argument('-t', '--targets', nargs='+', required=True,
                            help='specify targets to relatively aggregate')
    parser.add_argument('-s', '--stripped', action='store_true', default=False,
                            help='process stripped functions')
    args = parser.parse_args()
    
    os.chdir(os.path.join(os.path.dirname(sys.path[0]), 'extract', args.experiment))

    f = Features(args.targets)
    f.collect(args.stripped)
    f.save(args.experiment)
    f.show_stats()
