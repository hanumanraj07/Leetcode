// Last updated: 7/23/2026, 3:01:15 PM
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4
5        vector<bool> ans;
6
7        for(int i=0; i<candies.size(); i++){
8            int maxCandy = *max_element(candies.begin(), candies.end());
9            int sum = candies[i]+ extraCandies;
10            if(sum >= maxCandy){
11                ans.push_back(true);
12            }
13            else {
14                ans.push_back(false);
15            }
16        }
17        return ans;
18    }
19};