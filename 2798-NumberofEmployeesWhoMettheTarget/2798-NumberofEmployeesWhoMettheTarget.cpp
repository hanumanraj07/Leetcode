// Last updated: 4/30/2026, 2:10:15 PM
1class Solution {
2public:
3    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
4
5        int count = 0;
6
7        for(int i : hours) {
8
9            if(i >= target) {
10                count += 1;
11            }
12        }
13
14        return count;
15    }
16};