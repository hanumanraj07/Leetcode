// Last updated: 5/5/2026, 9:35:26 PM
1class Solution {
2public:
3    string truncateSentence(string s, int k) {
4        int spaceCount = 0;
5
6        for (int i = 0; i < s.length(); i++) {
7            if (s[i] == ' ') {
8                spaceCount++;
9                if (spaceCount == k) {
10                    return s.substr(0, i);
11                }
12            }
13        }
14
15        return s; 
16    }
17};