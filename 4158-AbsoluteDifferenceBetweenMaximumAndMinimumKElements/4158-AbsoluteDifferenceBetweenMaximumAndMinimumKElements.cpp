// Last updated: 4/6/2026, 5:55:17 PM
class Solution {
public:
    int absDifference(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int sumSmall = 0;
        int sumLarge = 0;
 
        for(int i = 0; i < k; i++){
            sumSmall += nums[i];
        }
 
        for(int i = n - k; i < n; i++){
            sumLarge += nums[i];
        }

        return abs(sumLarge - sumSmall);
    }
};