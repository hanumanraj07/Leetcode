// Last updated: 7/17/2026, 3:32:35 PM
1class Solution {
2public:
3    int findLHS(vector<int>& nums) {
4
5        sort(nums.begin(), nums.end());
6
7        int i = 0;
8        int ans = 0;
9
10        for (int j = 0; j < nums.size(); j++) {
11
12            while (nums[j] - nums[i] > 1) {
13                i++;
14            }
15
16            if (nums[j] - nums[i] == 1) {
17                ans = max(ans, j - i + 1);
18            }
19        }
20
21        return ans;
22    }
23};