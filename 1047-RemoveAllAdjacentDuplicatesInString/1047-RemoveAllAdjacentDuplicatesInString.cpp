// Last updated: 6/5/2026, 1:32:46 PM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4
5        string ans;
6
7        for (char ch : s) {
8            if (!ans.empty() && ans.back() == ch) {
9                ans.pop_back();
10            } else {
11                ans.push_back(ch);
12            }
13        }
14        return ans;
15    }
16};