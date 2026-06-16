// Last updated: 6/16/2026, 3:38:15 PM
1class Solution {
2public:
3    string simplifyPath(string path) {
4        vector<string> st;
5        string curr = "";
6
7        for (int i = 0; i <= path.size(); i++) {
8            if (i == path.size() || path[i] == '/') {
9                if (curr == "..") {
10                    if (!st.empty()) st.pop_back();
11                }
12                else if (curr != "" && curr != ".") {
13                    st.push_back(curr);
14                }
15                curr = "";
16            } else {
17                curr += path[i];
18            }
19        }
20
21        string ans = "";
22        for (string s : st) {
23            ans += "/" + s;
24        }
25
26        return ans.empty() ? "/" : ans;
27    }
28};