// Last updated: 7/23/2026, 3:20:16 PM
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        bool flaginc = true;
5        bool flagdec = true;
6        for (int i = 0; i < nums.size() - 1; i++) {
7            if (nums[i] > nums[i + 1])
8                flaginc = false;
9            if (nums[i] < nums[i + 1])
10                flagdec = false;
11        }
12        return flaginc || flagdec;
13    }
14};