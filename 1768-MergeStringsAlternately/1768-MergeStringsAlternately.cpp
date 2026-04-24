// Last updated: 4/24/2026, 11:00:58 AM
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        string res;
5        res.reserve(word1.length() + word2.length()); 
6        
7        int i = 0;
8        while(i < word1.length() || i < word2.length()){
9            if(i < word1.length()){
10                res += word1[i];
11            }
12            if(i < word2.length()){
13                res += word2[i];
14            }
15            i++;
16        } 
17        return res;
18    }
19};