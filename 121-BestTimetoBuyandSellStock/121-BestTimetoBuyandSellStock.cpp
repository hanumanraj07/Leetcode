// Last updated: 4/30/2026, 10:40:42 AM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4         int minPrice = INT_MAX;
5        int maxProfit = 0;
6
7        for (int price : prices) {
8            
9            minPrice = min(minPrice, price);
10 
11            int profit = price - minPrice;
12 
13            maxProfit = max(maxProfit, profit);
14        }
15
16        return maxProfit;
17    }
18};