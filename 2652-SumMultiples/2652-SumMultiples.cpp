// Last updated: 5/27/2026, 3:50:44 PM
1class Solution {
2public:
3    bool isPowerOfThree(int n) {
4        
5        if( n <= 0)
6            return false;
7
8        while(n % 3 == 0){
9            n /= 3;
10        }
11        return n == 1;
12    }
13};