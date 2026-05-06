// Last updated: 5/6/2026, 9:44:28 AM
1class Solution {
2public:
3    int fib(int n) {
4        if(n <= 1) return n;
5
6        int a = 0 , b = 1;
7
8        for(int i = 2; i <= n; i++){
9            int c = a + b;
10            a = b;
11            b = c;
12        }
13        return b;
14    }
15};