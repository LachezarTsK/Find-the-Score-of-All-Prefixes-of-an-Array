
public class Solution {

    public long[] findPrefixScore(int[] input) {
        long[] prefixScoresAfterConversion = new long[input.length];
        long prefixSumConvertedValues = 0;
        int maxValueFromStart = 0;

        for (int i = 0; i < input.length; ++i) {
            maxValueFromStart = Math.max(maxValueFromStart, input[i]);
            long convertedValue = input[i] + maxValueFromStart;
            prefixSumConvertedValues += convertedValue;
            prefixScoresAfterConversion[i] = prefixSumConvertedValues;
        }

        return prefixScoresAfterConversion;
    }
}
