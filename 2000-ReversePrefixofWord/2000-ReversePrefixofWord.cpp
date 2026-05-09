// Last updated: 5/9/2026, 1:26:57 PM
1class Solution {
2public:
3    string reversePrefix(string word, char ch) {
4        int idx = word.find(ch);
5
6        if(idx != string::npos){
7            reverse(word.begin(), word.begin() + idx + 1);
8        }
9
10        return word;
11    }
12};