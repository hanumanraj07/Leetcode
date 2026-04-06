// Last updated: 4/6/2026, 5:55:54 PM
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i = 0; i <n; i++){
            if(0 <= i && i < n){
                ans[i]=nums[nums[i]];
            }
        }
        return ans;
    }
};