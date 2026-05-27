// Last updated: 5/27/2026, 3:20:29 PM
1class Solution {
2public:
3    string restoreString(string s, vector<int>& indices) {
4        string ans = s;
5
6        for(int i = 0; i < s.size(); i++){
7            ans[indices[i]] = s[i];
8        }
9        return ans;
10    }
11};