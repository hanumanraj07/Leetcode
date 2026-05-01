// Last updated: 5/1/2026, 10:39:06 PM
1class Solution {
2public:
3    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
4        unordered_set<int> friendSet(friends.begin(), friends.end());
5        vector<int> result;
6
7        for (int x : order) {
8            if (friendSet.count(x)) {
9                result.push_back(x);
10            }
11        }
12
13        return result;
14    }
15};