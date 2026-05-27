// Last updated: 5/27/2026, 3:09:21 PM
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        vector <int> ans = nums;
5
6        ans.insert(ans.end() , nums.begin() , nums.end());
7
8        return ans;
9    }
10};