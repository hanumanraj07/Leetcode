// Last updated: 7/14/2026, 6:11:53 PM
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        string ans;
5        int count = 0;
6
7        for (char ch : s) {
8            if (ch == '(') {
9                if (count > 0) {
10                    ans += ch;
11                }
12                count++;
13            } else {
14                count--;
15                if (count > 0) {
16                    ans += ch;
17                }
18            }
19        }
20
21        return ans;
22    }
23};