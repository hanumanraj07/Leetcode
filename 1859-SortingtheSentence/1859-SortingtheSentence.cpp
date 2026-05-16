// Last updated: 5/16/2026, 10:21:19 AM
1class Solution {
2public:
3    int maxScore(vector<int>& nums) {
4        sort(nums.begin(), nums.end(), greater<int>());
5
6        long long sum = 0;
7        int count = 0;
8
9        for(int num : nums){
10            sum += num;
11
12            if(sum > 0)
13            count++;
14        }
15
16        return count;
17    }
18};