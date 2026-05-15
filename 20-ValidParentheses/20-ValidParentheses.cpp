// Last updated: 5/15/2026, 11:24:28 AM
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5
6        for(char c: s){
7            if(c == '(' || c=='{' || c=='['){
8                st.push(c);
9            }
10            else {
11                if(st.empty()) return false;
12
13                if(c == ')' && st.top() != '(') return false;
14                if(c == '}' && st.top() != '{') return false;
15                if(c == ']' && st.top() != '[') return false;
16
17                st.pop();
18            }
19        }
20        return st.empty();
21    }
22};