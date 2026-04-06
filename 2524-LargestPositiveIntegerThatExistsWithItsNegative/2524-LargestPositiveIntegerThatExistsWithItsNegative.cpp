// Last updated: 4/6/2026, 5:55:41 PM
class Solution {
public:
    int findMaxK(vector<int>& nums) {

        unordered_set<int> s(nums.begin(), nums.end());
        int ans = -1;

        for(int num : nums){
            if(num > 0 && s.count(-num)){
                ans = max(ans, num);
            }
        }

        return ans;
    }
};