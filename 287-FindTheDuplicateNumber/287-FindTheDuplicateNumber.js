// Last updated: 4/6/2026, 5:56:42 PM
var findDuplicate = function(nums) {
    let slow = nums[0];
    let fast = nums[0]; 
    
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow !== fast);
 
    slow = nums[0];

    while (slow !== fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
};