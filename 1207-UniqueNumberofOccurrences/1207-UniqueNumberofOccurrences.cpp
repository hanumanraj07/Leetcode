// Last updated: 4/13/2026, 1:35:53 PM
1class Solution {
2public:
3    bool uniqueOccurrences(vector<int>& arr) {
4        unordered_map<int, int> freq;
5 
6        for (int num : arr) {
7            freq[num]++;
8        }
9 
10        unordered_set<int> seen;
11
12        for (auto it : freq) {
13            if (seen.count(it.second)) {
14                return false;  
15            }
16            seen.insert(it.second);
17        }
18
19        return true;
20    }
21};