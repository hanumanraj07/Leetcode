// Last updated: 5/5/2026, 9:28:36 PM
1#include <iostream>
2using namespace std;
3
4class Solution {
5public:
6    int numberOfSteps(int num) {
7        int steps = 0;
8
9        while (num > 0) {
10            if (num % 2 == 0) {
11                num /= 2;
12            } else {
13                num -= 1;
14            }
15            steps++;
16        }
17
18        return steps;
19    }
20};