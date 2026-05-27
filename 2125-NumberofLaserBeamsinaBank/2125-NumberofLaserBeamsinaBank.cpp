// Last updated: 5/27/2026, 2:50:15 PM
1class Solution {
2public:
3    int smallestEvenMultiple(int n) {
4        return (n % 2 == 0) ? n : n*2;
5    }
6};