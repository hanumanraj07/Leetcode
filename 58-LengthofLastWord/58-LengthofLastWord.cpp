// Last updated: 4/17/2026, 4:37:06 PM
1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int len = 0;
5        int i = s.size() - 1;
6  
7        while (i >= 0 && s[i] == ' ') {
8            i--;
9        } 
10
11        while (i >= 0 && s[i] != ' ') {
12            len++;
13            i--;
14        }
15
16        return len;
17    }
18};