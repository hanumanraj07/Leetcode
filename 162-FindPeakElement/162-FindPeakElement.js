// Last updated: 4/6/2026, 6:52:11 PM
var findPeakElement = function(nums) {
    let l = 0, r = nums.length - 1;

    while (l < r) {
        let m = Math.floor((l + r) / 2);
        if (nums[m] < nums[m + 1]) l = m + 1;
        else r = m;
    }

    return l;
};