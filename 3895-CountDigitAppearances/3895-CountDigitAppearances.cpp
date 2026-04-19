// Last updated: 4/19/2026, 10:46:37 PM
1class Solution {
2public:
3    int countDigitOccurrences(vector<int>& nums, int digit) {
4        int count = 0;
5
6        for (int num : nums) { 
7            if (num == 0 && digit == 0) {
8                count++;
9                continue;
10            }
11
12            while (num > 0) {
13                if (num % 10 == digit) {
14                    count++;
15                }
16                num /= 10;
17            }
18        }
19
20        return count;
21    }
22};