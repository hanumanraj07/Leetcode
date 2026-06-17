// Last updated: 6/17/2026, 9:34:45 AM
1class Solution {
2public:
3    string processStr(string s) {
4        string ans = "";
5
6        for(char ch : s) {
7            if(ch >= 'a' && ch <= 'z') {
8                ans += ch;
9            }
10            else if(ch == '*') {
11                if(!ans.empty()) ans.pop_back();
12            }
13            else if(ch == '#') {
14                ans += ans;
15            }
16            else { // ch == '%'
17                reverse(ans.begin(), ans.end());
18            }
19        }
20
21        return ans;
22    }
23};