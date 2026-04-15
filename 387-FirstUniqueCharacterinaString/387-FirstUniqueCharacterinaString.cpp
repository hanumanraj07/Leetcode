// Last updated: 4/15/2026, 10:32:51 AM
1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        unordered_map<char, char> mp1;
5        unordered_map<char, char> mp2;
6
7        for (int i = 0; i < s.size(); i++) {
8            char a = s[i];
9            char b = t[i];
10
11            if (mp1.count(a) && mp1[a] != b)
12                return false;
13            if (mp2.count(b) && mp2[b] != a)
14                return false;
15
16            mp1[a] = b;
17            mp2[b] = a;
18        }
19        return true;
20    }
21};