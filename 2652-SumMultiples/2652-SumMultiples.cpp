// Last updated: 5/27/2026, 3:35:52 PM
1class Solution {
2public:
3    int sumOfMultiples(int n) {
4        
5        int sum = 0; 
6
7        for(int i = 1; i <= n; i++){
8            if(i%3 == 0 || i % 5== 0 || i % 7 == 0){
9                sum += i;
10            }
11        }
12        return sum;
13    }
14};