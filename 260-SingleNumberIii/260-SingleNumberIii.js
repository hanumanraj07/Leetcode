// Last updated: 4/6/2026, 5:56:46 PM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var singleNumber = function(nums) {
     let count = {};
 
    for (let num of nums) {
        count[num] = (count[num] || 0) + 1;
    }

    let result = [];
 
    for (let num in count) {
        if (count[num] === 1) {
            result.push(Number(num));
        }
    }

    return result;
};