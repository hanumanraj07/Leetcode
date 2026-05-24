// Last updated: 5/24/2026, 1:19:19 PM
1class Solution {
2public:
3    int numberOfSteps(int num) {
4        int steps = 0;
5
6        while (num > 0) {
7            if (num % 2 == 0) {
8                num /= 2;
9            } else {
10                num -= 1;
11            }
12
13            steps++;
14        }
15        return steps;
16    }
17};