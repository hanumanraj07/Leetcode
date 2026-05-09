// Last updated: 5/9/2026, 1:48:11 PM
1class Solution {
2public:
3    int titleToNumber(string columnTitle) {
4        int result = 0;
5
6        for(char ch : columnTitle){
7            result = result * 26 + (ch - 'A' + 1);
8        }
9
10        return result;
11    }
12};