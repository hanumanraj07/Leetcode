// Last updated: 4/21/2026, 3:24:19 PM
1class Solution {
2public:
3    int findLucky(vector<int>& arr) {
4        unordered_map<int, int> freq;
5        for (int x : arr) {
6            freq[x]++;
7        }
8        int ans = -1;
9        for (auto& p : freq) {
10            if (p.first == p.second) {
11                ans = max(ans, p.first);
12            }
13        }
14
15        return ans;
16    }
17};