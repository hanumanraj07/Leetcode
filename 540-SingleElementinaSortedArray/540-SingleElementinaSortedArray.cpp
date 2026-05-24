// Last updated: 5/24/2026, 1:36:56 PM
1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        vector <int> ans(nums.size());
5        int pos = 0;
6        int neg  = 1;
7
8        for(int num : nums){
9            if(num > 0){
10                ans[pos] = num;
11                pos += 2;
12            }
13            else{
14                ans[neg] = num;
15                neg += 2;
16            }
17        }
18        return ans;
19    }
20};