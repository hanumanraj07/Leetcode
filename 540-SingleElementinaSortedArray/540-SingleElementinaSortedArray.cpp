// Last updated: 5/24/2026, 1:09:00 PM
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n = nums.size();
5
6        vector<int> ans(n , 1);
7
8        int prefix = 1;
9
10        for(int i=0; i<n; i++){
11            ans[i] = prefix;
12            prefix *= nums[i];
13        }
14        int suffix = 1;
15
16        for(int i = n - 1; i>= 0; i--){
17            ans[i] *= suffix;
18            suffix *= nums[i];
19        }
20        return ans;
21    }
22};