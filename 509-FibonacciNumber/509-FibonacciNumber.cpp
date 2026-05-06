// Last updated: 5/6/2026, 9:56:06 AM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int , int> mp;
5
6        for(int i = 0; i < nums.size(); i++){
7            int complement = target - nums[i];
8
9            if(mp.find(complement) != mp.end()){
10                return {mp[complement], i};
11            }
12        mp[nums[i]]= i;
13        }
14    return {};
15    }
16};