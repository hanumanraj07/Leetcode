// Last updated: 5/27/2026, 3:14:51 PM
1class Solution {
2public:
3    string defangIPaddr(string address) {
4        string ans = "";
5
6        for(char c : address){
7            if(c == '.')
8                ans +=  "[.]";
9
10                else
11                    ans += c;
12        }
13        return ans;
14    }
15};