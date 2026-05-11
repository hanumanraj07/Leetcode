// Last updated: 5/11/2026, 2:53:06 PM
1class Solution {
2public:
3    int reverseBits(int n) {
4        int ans = 0;
5
6        for(int i = 0; i < 32; i++) {
7            ans <<= 1;         
8            ans |= (n & 1);  
9            n >>= 1;         
10        }
11        return ans;
12    }
13};