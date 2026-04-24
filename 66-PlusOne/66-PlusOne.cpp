// Last updated: 4/24/2026, 11:41:33 AM
1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        for (int i = digits.size() - 1; i >= 0; i--) {
5            digits[i]++;
6            if (digits[i] < 10) {
7                return digits;
8            }
9            digits[i] = 0;
10        }
11 
12        digits.insert(digits.begin(), 1);
13        return digits;
14    }
15};