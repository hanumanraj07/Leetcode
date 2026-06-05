// Last updated: 6/5/2026, 2:00:27 PM
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int>st;
5        int a,b;
6        for(string c:tokens){
7            if(c=="+"){
8                a=st.top();
9                st.pop();
10                b=st.top();
11                st.pop();
12                st.push(b+a);
13            }
14            else if(c=="-"){
15                a=st.top();
16                st.pop();
17                b=st.top();
18                st.pop();
19                st.push(b-a);
20            }
21            else if(c=="*"){
22                a=st.top();
23                st.pop();
24                b=st.top();
25                st.pop();
26                st.push(b*a);
27            }
28            else if(c=="/"){
29                a=st.top();
30                st.pop();
31                b=st.top();
32                st.pop();
33                st.push(b/a);
34            }
35            else st.push(stoi(c));
36        }
37        return st.top();
38    }
39};