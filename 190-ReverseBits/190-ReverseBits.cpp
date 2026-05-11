// Last updated: 5/11/2026, 3:07:28 PM
1class Solution {
2public:
3    int reverseBits(int n) {
4        int result = 0;
5
6        for(int i = 0 ; i < 32; i++){
7            result = (result << 1) | (n & 1);
8            n = n >> 1;
9        }
10        return result;
11    }
12};