
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    
public:
    vector<long long> findPrefixScore(const vector<int>& input) const {
        vector<long long> prefixScoresAfterConversion(input.size());
        long long prefixSumConvertedValues = 0;
        int maxValueFromStart = 0;

        for (int i = 0; i < input.size(); ++i) {
            maxValueFromStart = max(maxValueFromStart, input[i]);
            long long convertedValue = input[i] + maxValueFromStart;
            prefixSumConvertedValues += convertedValue;
            prefixScoresAfterConversion[i] = prefixSumConvertedValues;
        }

        return prefixScoresAfterConversion;
    }
};
