// Last updated: 4/13/2026, 1:39:57 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4         if (nums.size() == 0) return 0;
5
6    int k = 0;
7
8    for (int i = 1; i < nums.size(); i++) {
9        if (nums[i] != nums[k]) {
10            k++;
11            nums[k] = nums[i];
12        }
13    }
14    return k + 1;
15    }
16};