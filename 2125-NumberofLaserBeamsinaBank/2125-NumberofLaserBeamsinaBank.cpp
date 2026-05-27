// Last updated: 5/27/2026, 2:30:00 PM
1class Solution {
2public:
3    string toLowerCase(string s) {
4      for(char &c : s){
5        c = tolower(c);
6      }  
7      return s;
8    }
9};