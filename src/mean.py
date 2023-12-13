import os
import sys
import pandas as pd
import argparse

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('experiment', type=str)
    parser.add_argument('-t', '--targets', nargs='+', required=True,
                            help='specify targets to relatively aggregate')
    args = parser.parse_args()
    
    targets = args.targets
    maxr = len(targets)
    assert(maxr > 1)
    
    data = []
    os.chdir(os.path.join(os.path.dirname(sys.path[0]), 'eval', args.experiment, 'bin'))
    for filename in os.listdir():
        b = pd.read_csv(filename, header=0, delimiter=',')
        data.append(b)
    data = pd.concat(data, axis=0)

    index = data.filter(['decompiler', 'binary'])
    data = index.join(data.groupby(by=['decompiler', 'binary'])['r2i'].mean(), on=['decompiler', 'binary'])
    data = data.drop_duplicates()
    with open(f'../mean.csv', 'w') as f:
        data.to_csv(f, index=False)

    ranks = []
    for i in range(len(data) // 6):
        i *= 6
        ranks.extend(list(data.iloc[i:i+6, 2].rank(method='min', ascending=False)))
    data['rank'] = ranks

    ranked = {}
    for decompiler in targets:
        ranked[decompiler] = [0] * (maxr)
    for dv in data.values:
        ranked[dv[0]][int(dv[3])-1] += 1
    ranked = pd.DataFrame(ranked)
    with open(f'../rom.csv', 'w') as f:
        ranked.to_csv(f, index=False)
    print(ranked)
    os.remove('../rom.csv')