// Last updated: 5/3/2026, 9:14:47 PM
1class Solution {
2public:
3    int getSum(int a, int b) {
4        while(b != 0){
5            unsigned int carry = (unsigned int)( a & b) << 1;
6            a = a ^ b;
7            b = carry;
8        }
9        return a;
10    }
11};