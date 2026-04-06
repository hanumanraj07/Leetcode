// Last updated: 4/6/2026, 6:52:23 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxi = nums[0];
        for(int n : nums){
            sum = max(n, sum + n);
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};