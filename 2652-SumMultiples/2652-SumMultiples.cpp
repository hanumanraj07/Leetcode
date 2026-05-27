// Last updated: 5/27/2026, 3:43:20 PM
1class Solution {
2public:
3    bool isPowerOfFour(int n) {
4        return n > 0 && (n& (n-1)) == 0 && (n - 1) % 3 == 0;
5    }
6};