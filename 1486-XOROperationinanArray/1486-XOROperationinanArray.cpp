// Last updated: 4/28/2026, 9:57:00 PM
1class Solution {
2public:
3    int xorOperation(int n, int start) {
4        int result = 0;
5        for (int i = 0; i < n; i++) {
6            result ^= start + 2 * i;
7        }
8        return result;
9    }
10};