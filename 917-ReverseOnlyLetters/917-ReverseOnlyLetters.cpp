// Last updated: 4/9/2026, 12:09:14 PM
1class Solution {
2public:
3    string reverseOnlyLetters(string s) {
4        int l = 0, r = s.size() - 1;
5
6        while (l < r) {
7            if (!isalpha(s[l])) {
8                l++;
9            } 
10            else if (!isalpha(s[r])) {
11                r--;
12            } 
13            else {
14                swap(s[l], s[r]);
15                l++;
16                r--;
17            }
18        }
19
20        return s;
21    }
22};