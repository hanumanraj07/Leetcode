// Last updated: 7/21/2026, 9:59:04 AM
1class Solution {
2public:
3    int findNthDigit(int n) {
4        long long digitLength = 1;
5        long long count = 9;
6        long long start = 1;
7 
8        while (n > digitLength * count) {
9            n -= digitLength * count;
10            digitLength++;
11            count *= 10;
12            start *= 10;
13        }
14 
15        start += (n - 1) / digitLength;
16 
17        string num = to_string(start);
18        return num[(n - 1) % digitLength] - '0';
19    }
20};                       