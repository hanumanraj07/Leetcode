// Last updated: 5/9/2026, 1:39:58 PM
1class Solution {
2public:
3    int countAsterisks(string s) {
4        int count = 0;
5        bool insidePipe = false;
6
7        for(char ch:s){
8            if(ch == '|'){
9                insidePipe = !insidePipe ;
10            }
11            else if(ch == '*' && !insidePipe){
12                count++;
13            }
14        }
15        return count;
16    }
17};