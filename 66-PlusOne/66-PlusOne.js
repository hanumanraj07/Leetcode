// Last updated: 4/6/2026, 6:52:22 PM
/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    for (let i = digits.length - 1; i >= 0; i--) {
        digits[i]++;
        if (digits[i] < 10) {
            return digits;
        }
        digits[i] = 0;
    }

    digits.unshift(1);
    return digits;
};