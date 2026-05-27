// Last updated: 5/27/2026, 2:12:13 PM
1class Solution {
2public:
3    int minimumOperations(vector<int>& nums) {
4       set<int> s;
5
6       for(int num : nums) {
7        if(num > 0){
8            s.insert(num);
9        }
10       }
11       return s.size();
12    }
13};