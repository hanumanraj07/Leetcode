// Last updated: 4/30/2026, 9:59:12 AM
1#include <iostream>
2#include <stack>
3using namespace std;
4
5class Solution {
6public:
7    bool isValid(string s) {
8        stack<char> st;
9
10        for (char ch : s) { 
11            if (ch == '(' || ch == '{' || ch == '[') {
12                st.push(ch);
13            } 
14            else { 
15                if (st.empty()) return false;
16
17                char top = st.top();
18                st.pop();
19 
20                if ((ch == ')' && top != '(') ||
21                    (ch == '}' && top != '{') ||
22                    (ch == ']' && top != '[')) {
23                    return false;
24                }
25            }
26        }
27        return st.empty();
28    }
29};