// Last updated: 5/15/2026, 11:13:16 AM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string, vector <string>> mp;
5
6        for(string s: strs){
7            string temp = s;
8            sort(temp.begin(), temp.end());
9
10            mp[temp].push_back(s);
11        }
12
13        vector<vector<string>> ans;
14        for(auto it : mp){
15            ans.push_back(it.second);
16        }
17        return ans;
18    }
19};