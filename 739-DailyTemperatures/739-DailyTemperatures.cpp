// Last updated: 4/30/2026, 11:58:12 AM
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        int n = temperatures.size();
5        vector<int> result(n, 0);
6        stack<int> st;
7
8        for (int i = 0; i < n; i++) {
9            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
10                int prevIndex = st.top();
11                st.pop();
12                result[prevIndex] = i - prevIndex;
13            }
14            st.push(i);
15        }
16
17        return result;
18    }
19};