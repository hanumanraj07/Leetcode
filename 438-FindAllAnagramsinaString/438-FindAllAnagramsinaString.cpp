// Last updated: 7/17/2026, 5:12:53 PM
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4        if (p.length() > s.length()) return {};
5
6        vector<int> pCount(26, 0);
7        vector<int> window(26, 0);
8        vector<int> ans;
9 
10        for (int i = 0; i < p.length(); i++) {
11            pCount[p[i] - 'a']++;
12            window[s[i] - 'a']++;
13        }
14 
15        if (pCount == window) {
16            ans.push_back(0);
17        }
18 
19        int left = 0;
20        for (int right = p.length(); right < s.length(); right++) { 
21            window[s[right] - 'a']++; 
22            window[s[left] - 'a']--;
23            
24            left++;
25 
26            if (pCount == window) {
27                ans.push_back(left);
28            }
29        }
30
31        return ans;
32    }
33};