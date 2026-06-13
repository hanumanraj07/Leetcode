// Last updated: 6/13/2026, 9:44:06 PM
1class Solution {
2public:
3    bool isSameAfterReversals(int num) {
4        return num == 0 || num % 10 != 0;
5    }
6};