// Last updated: 6/6/2026, 11:54:44 AM
1class Solution {
2public:
3    string removeDuplicates(string s, int k) {
4        vector<pair<char, int>> st;
5
6        for (char ch : s) {
7            if (!st.empty() && st.back().first == ch) {
8                st.back().second++;
9
10                if (st.back().second == k) {
11                    st.pop_back();
12                }
13            } else {
14                st.push_back({ch, 1});
15            }
16        }
17
18        string ans;
19
20        for (auto &p : st) {
21            ans.append(p.second, p.first);
22        }
23
24        return ans;
25    }
26};