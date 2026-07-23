// Last updated: 7/23/2026, 3:54:24 PM
1class Solution {
2public:
3    int averageValue(vector<int>& nums) {
4
5        int sum = 0; 
6        int count = 0;
7
8        for(int i=0; i <nums.size(); i++){
9            if(nums[i]%2==0 && nums[i]%3==0){
10                sum += nums[i];
11                count++;
12            }
13        } 
14        return (count == 0) ? 0 : sum / count;
15    }
16};