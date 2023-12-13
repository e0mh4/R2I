import pandas as pd
import argparse

if __name__ == '__main__':
    """ Calculate Rankings
    """
    parser = argparse.ArgumentParser()
    parser.add_argument('-t', '--targets', nargs='+', required=True,
                            help='specify targets to relatively aggregate')
    args = parser.parse_args()
    
    targets = args.targets
    maxr = len(targets)
    assert(maxr > 1)

    data = pd.read_csv(f'rank-func.csv', header=0, delimiter=',')

    ranked = {}
    for target in targets:
        ranked[target] = [target] + [0] * maxr
        for rank in range(1, maxr+1):
            try:
                ranked[target][rank] = data[target].value_counts()[rank]
            except:
                ranked[target][rank] = 0
    
    with open(f'rank.csv', 'w') as f:
        R_column_names = ['target', *range(1, maxr+1)]
        pd.DataFrame(ranked.values(), columns=R_column_names).to_csv(f)
