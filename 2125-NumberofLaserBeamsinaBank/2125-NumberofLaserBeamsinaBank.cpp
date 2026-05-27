// Last updated: 5/27/2026, 2:04:46 PM
1class Solution {
2public:
3    int smallestEqual(vector<int>& nums) {
4        for(int i = 0; i < nums.size(); i++){
5            if(i % 10 == nums[i]){
6                return i;
7            }
8        }
9        return -1;
10    }
11};