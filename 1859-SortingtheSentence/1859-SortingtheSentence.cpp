// Last updated: 5/16/2026, 10:12:16 AM
1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        k = k%n;
7
8        reverse(nums.begin(), nums.end());
9
10        reverse(nums.begin(),nums.begin() + k);
11
12        reverse(nums.begin() + k, nums.end());
13    }
14};