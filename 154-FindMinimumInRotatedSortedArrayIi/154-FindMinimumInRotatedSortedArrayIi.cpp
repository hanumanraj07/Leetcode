// Last updated: 4/6/2026, 6:52:12 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};