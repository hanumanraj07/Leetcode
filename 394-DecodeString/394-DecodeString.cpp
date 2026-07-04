// Last updated: 7/4/2026, 9:53:26 PM
1class Solution {
2public:
3    string decode(string &s, int &i) {
4        string result = "";
5
6        while (i < s.length() && s[i] != ']') {
7
8            if (isdigit(s[i])) {
9                int num = 0;
10
11                while (i < s.length() && isdigit(s[i])) {
12                    num = num * 10 + (s[i] - '0');
13                    i++;
14                }
15
16                i++;
17
18                string decodedPart = decode(s, i);
19
20                i++;
21
22                while (num--) {
23                    result += decodedPart;
24                }
25            }
26            else {
27                result += s[i];
28                i++;
29            }
30        }
31
32        return result;
33    }
34
35    string decodeString(string s) {
36        int i = 0;
37        return decode(s, i);
38    }
39};