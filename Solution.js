
/**
 * @param {number[]} input
 * @return {number[]}
 */
var findPrefixScore = function (input) {
    const  prefixScoresAfterConversion = new Array(input.length);
    let prefixSumConvertedValues = 0;
    let maxValueFromStart = 0;

    for (let i = 0; i < input.length; ++i) {
        maxValueFromStart = Math.max(maxValueFromStart, input[i]);
        let convertedValue = input[i] + maxValueFromStart;
        prefixSumConvertedValues += convertedValue;
        prefixScoresAfterConversion[i] = prefixSumConvertedValues;
    }

    return prefixScoresAfterConversion;
};
