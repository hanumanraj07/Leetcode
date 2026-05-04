// Last updated: 5/4/2026, 9:07:35 AM
1#include <iostream>
2using namespace std;
3
4class Solution {
5public:
6    string interpret(string command) {
7        string result = "";
8
9        for (int i = 0; i < command.length(); i++) {
10            if (command[i] == 'G') {
11                result += 'G';
12            } 
13            else if (command[i] == '(' && command[i + 1] == ')') {
14                result += 'o';
15                i++;  
16            } 
17            else { 
18                result += "al";
19                i += 3;  
20            }
21        }
22
23        return result;
24    }
25};