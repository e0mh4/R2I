import sys
import pandas as pd
import scipy.stats as stats
import argparse

from extractor import FEATURES_HDR

class Correlation():
    def __init__(self, data):
        self.data = data
    
    def pvalues(self, data):
        cols = pd.DataFrame(columns=data.columns)
        p = cols.transpose().join(cols, how='outer')
        for r in data.columns:
            for c in data.columns:
                tmp = data[data[r].notnull() & data[c].notnull()]
                p[r][c] = round(stats.pearsonr(tmp[r], tmp[c])[1], 100)
        return p


    def correlate_r2i(self):
        """ Calculate correlations R2I between feature scores
        NOTE: We derive discrete values between 1-6 from actual scores from actual values
        to exclude the influences of characteristics in each function
        """
        r2i = []
        features = {}
        for f in FEATURES_HDR:
            features[f] = []
        
        # Convert feature scores to ranks
        for j in range(3, len(FEATURES_HDR)+3):
            feature = FEATURES_HDR[j-3]
            for i in range(len(self.data.index) // 6):
                i *= 6
                features[feature].extend(stats.rankdata(self.data.iloc[i:i+6, j]))
        
        # Convert R2I to ranks
        j = len(FEATURES_HDR)+3
        for i in range(len(self.data.index) // 6):
            i *= 6
            r2i.extend(stats.rankdata(self.data.iloc[i:i+6, j]))

        with open(f'correlation-r2i.csv', 'w') as f:
            for feature in features.keys():
                corr = pd.DataFrame({feature: features[feature], 'r2i': r2i})
                corr.corr(method='pearson').to_csv(f)
                self.pvalues(corr).to_csv(f)
                f.write("\n")
        print("[+] Successfully saved correlations between each feature and r2i: correlation-r2i.csv")
    

    def correlate_features(self, w):
        """ Calculate correlations between feature scores
        NOTE: We derive discrete values between 1-6 from actual scores from actual values
        to exclude the influences of characteristics in each function
        """
        weight = pd.read_csv(f'{sys.path[0]}/weight.csv', header=0, delimiter=',')
        if w not in weight.columns[1:]:
            print('[-] Correlation cannot be proceeded due to invalid weight %s' % w)
            sys.exit()
        w = weight.columns.get_loc(w)

        filter = []
        for dv in weight.values:
            if dv[w]: filter.append(dv[0])        
        data = self.data.filter(filter, axis=1)

        with open(f'correlation-feat.csv', 'w') as f:
            corr = pd.DataFrame(data)
            f.write(f'{len(corr.columns)}\n')
            corr.corr(method='pearson').to_csv(f)
            self.pvalues(corr).to_csv(f)
        print("[+] Successfully saved correlations among features: correlation-feat.csv")


if __name__ == '__main__':
    """ Calculate spearman correlations between features of decompilers
    """
    parser = argparse.ArgumentParser()
    parser.add_argument('src', type=str, help='experiment containing source data')
    parser.add_argument('-w', '--weight', action='store', help='specify weight for evaluation')
    args = parser.parse_args()
    
    FEATURES_HDR = sorted(FEATURES_HDR[1:])
    data = pd.read_csv(f'../{args.src}/r2i.csv', header=0, delimiter=',')
    
    corr = Correlation(data)
    corr.correlate_features(args.weight)
    corr.correlate_r2i()
