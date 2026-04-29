// Last updated: 4/29/2026, 9:34:42 PM
1#include <iostream>
2using namespace std;
3
4class Solution {
5public:
6    string defangIPaddr(string address) {
7        string result;
8        
9        for (char ch : address) {
10            result += (ch == '.') ? "[.]" : string(1, ch);
11        }
12        
13        return result;
14    }
15};