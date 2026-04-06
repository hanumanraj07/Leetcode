// Last updated: 4/6/2026, 5:55:24 PM
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int i = 0, j = nums.size() - 1;
        double ans = INT_MAX;

        while(i < j) {
            ans = min(ans, (nums[i] + nums[j]) / 2.0);
            i++;
            j--;
        }

        return ans;
    }
};