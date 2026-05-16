// Last updated: 5/16/2026, 10:55:48 AM
1class Solution {
2public:
3    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
4        sort(asteroids.begin(), asteroids.end());
5
6        long long currMass = mass;
7
8        for(int asteroid : asteroids){
9            if(currMass < asteroid)
10                return false;
11
12                currMass += asteroid;
13            
14        }
15            return true;
16    }
17};