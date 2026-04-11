// Last updated: 4/11/2026, 2:59:51 PM
1class Solution {
2public:
3    string reverseWords(string s) {
4        stringstream ss(s);
5        string word, ans = "";
6
7        while (ss >> word) {    
8            ans = word + " " + ans;
9        }
10
11        if (!ans.empty()) ans.pop_back(); 
12        return ans;
13    }
14};