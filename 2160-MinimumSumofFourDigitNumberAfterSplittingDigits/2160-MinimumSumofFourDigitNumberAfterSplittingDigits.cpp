// Last updated: 5/4/2026, 9:25:23 AM
1class Solution {
2public:
3    string toLowerCase(string s) {
4        transform(s.begin(), s.end(), s.begin(), ::tolower);
5        return s;
6    }
7};