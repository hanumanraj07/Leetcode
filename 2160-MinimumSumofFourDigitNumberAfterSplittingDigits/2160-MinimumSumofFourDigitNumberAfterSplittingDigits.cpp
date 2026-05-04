// Last updated: 5/4/2026, 9:16:57 AM
1class Solution {
2public:
3    int minimumSum(int num) {
4        vector<int> digits;
5         
6        while (num > 0) {
7            digits.push_back(num % 10);
8            num /= 10;
9        }
10        
11        sort(digits.begin(), digits.end());
12        
13      
14        int num1 = digits[0] * 10 + digits[2];
15        int num2 = digits[1] * 10 + digits[3];
16        
17        return num1 + num2;
18    }
19};