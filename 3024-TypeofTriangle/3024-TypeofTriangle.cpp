// Last updated: 5/6/2026, 10:12:38 AM
1class Solution {
2public:
3    string triangleType(vector<int>& nums) {
4        set <int> s(nums.begin(), nums.end());
5
6        sort(nums.begin(), nums.end());
7
8        if((nums[0]+ nums[1]) <= nums[2]){
9            return "none";
10        }
11
12        if(s.size() == 1)
13        return "equilateral";
14
15        if(s.size() == 2)
16        return "isosceles";
17
18        return "scalene";
19
20         }
21};