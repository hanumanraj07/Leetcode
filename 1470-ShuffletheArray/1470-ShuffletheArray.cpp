// Last updated: 4/27/2026, 5:36:34 PM
1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        int i = 0;
5        int j = n;
6        vector<int> arr;
7        for (i, j; j < nums.size(); i++, j++) {
8            arr.push_back(nums[i]);
9            arr.push_back(nums[j]);
10        }
11        return arr;
12    }
13};