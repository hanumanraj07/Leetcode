// Last updated: 5/11/2026, 3:23:14 PM
1class Solution {
2public:
3    bool threeConsecutiveOdds(vector<int>& arr) {
4        int count = 0;
5
6        for (int num : arr) {
7            if (num % 2 != 0) {
8                count++;
9
10                if (count == 3)
11                    return true;
12            } else {
13                count = 0;
14            }
15        }
16        return false;
17    }
18};