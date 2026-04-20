// Last updated: 4/20/2026, 9:20:24 PM
1class Solution {
2public:
3    int countDigits(int num) {
4        int original = num;
5
6        int count = 0;
7
8        while(num > 0){
9
10            int digit = num % 10;
11
12            if(original % digit == 0){
13                count++;
14            }
15
16            num = num / 10;
17        }
18
19        return count;
20       
21    }
22};