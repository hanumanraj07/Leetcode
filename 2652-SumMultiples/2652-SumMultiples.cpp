// Last updated: 5/27/2026, 3:39:07 PM
1class Solution {
2public:
3    vector<double> convertTemperature(double celsius) {
4        
5        return {celsius + 273.15, celsius * 1.80 + 32.00};
6    }
7};