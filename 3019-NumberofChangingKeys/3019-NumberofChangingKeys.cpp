// Last updated: 4/30/2026, 2:39:10 PM
1class Solution {
2public:
3    int countKeyChanges(string s) {
4        int count=0;
5        for(int i=0;i<s.size();i++)
6            s[i]=tolower(s[i]);
7        for(int i=0;i<s.size()-1;i++)
8        {
9            if(s[i]!=s[i+1])
10            count++;
11        }
12        return count;
13    }
14};