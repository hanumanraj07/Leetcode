// Last updated: 4/8/2026, 11:13:14 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_set<char> st;
5        int left = 0, maxLen = 0;
6
7        for (int right = 0; right < s.size(); right++) {
8            while (st.count(s[right])) {
9                st.erase(s[left]);
10                left++;
11            }
12            st.insert(s[right]);
13            maxLen = max(maxLen, right - left + 1);
14        }
15
16        return maxLen;
17    }
18};