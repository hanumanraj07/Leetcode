// Last updated: 6/8/2026, 11:32:14 AM
1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4        vector<string> ans;
5
6        for (int i = 0; i < nums.size(); i++) {
7            int start = nums[i];
8
9            while (i + 1 < nums.size() && nums[i + 1] == nums[i] + 1) {
10                i++;
11            }
12
13            if (start == nums[i]) {
14                ans.push_back(to_string(start));
15            } else {
16                ans.push_back(to_string(start) + "->" + to_string(nums[i]));
17            }
18        }
19
20        return ans;
21    }
22};