// Last updated: 7/21/2026, 3:40:31 PM
1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int sum = 0;
5 
6        for (int i = 0; i < k; i++) {
7            sum += nums[i];
8        }
9
10        int maxSum = sum;
11 
12        for (int i = k; i < nums.size(); i++) {
13            sum += nums[i] - nums[i - k];
14            maxSum = max(maxSum, sum);
15        }
16
17        return (double)maxSum / k;
18    }
19};