// Last updated: 5/27/2026, 2:56:51 PM
1class Solution {
2public:
3    int finalValueAfterOperations(vector<string>& operations) {
4        int x = 0;
5
6        for(string op : operations){
7            if(op[1] == '+'){
8                x++;
9            }
10            else{
11                x--;
12            }
13        }
14            return x;
15    }
16};