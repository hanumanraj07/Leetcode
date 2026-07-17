// Last updated: 7/17/2026, 3:31:19 PM
1class Solution {
2public:
3    int findLHS(vector<int>& nums) {
4        unordered_map<int, int> frequencyMap;
5 
6        for (int num : nums) {
7            frequencyMap[num]++;
8        }
9
10        int ans = 0;
11 
12        for (auto& [num, count] : frequencyMap) {
13            if (frequencyMap.count(num + 1)) {
14                int currentLength = count + frequencyMap[num + 1];
15                ans = max(ans, currentLength);
16            }
17        }
18
19        return ans;
20    }
21};