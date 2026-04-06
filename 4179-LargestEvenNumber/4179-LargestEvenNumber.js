// Last updated: 4/6/2026, 5:55:21 PM
/**
 * @param {string} s
 * @return {string}
 */
var largestEven = function(s) {
    let i = s.lastIndexOf('2');
    return i == -1 ? "" : s.slice(0, i+1);
};