// Last updated: 4/10/2026, 2:48:45 PM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string, vector<string>> mp;
5
6        for (string s : strs) {
7            string key = s;
8            sort(key.begin(), key.end());
9            mp[key].push_back(s);
10        }
11
12        vector<vector<string>> ans;
13        for (auto it : mp) {
14            ans.push_back(it.second);
15        }
16
17        return ans;
18    }
19};