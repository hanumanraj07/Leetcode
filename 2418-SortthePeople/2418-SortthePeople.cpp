// Last updated: 4/29/2026, 9:47:11 PM
1class Solution {
2public:
3    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
4        vector<int> idx(names.size());
5         
6        for (int i = 0; i < idx.size(); i++) {
7            idx[i] = i;
8        }
9         
10        sort(idx.begin(), idx.end(), [&](int a, int b) {
11            return heights[a] > heights[b];
12        });
13         
14        vector<string> result;
15        for (int i : idx) {
16            result.push_back(names[i]);
17        }
18        
19        return result;
20    }
21};