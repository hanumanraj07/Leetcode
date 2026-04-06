// Last updated: 4/6/2026, 5:56:12 PM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
     for(int i=0; i<nums.size(); i++){
            nums[i]=(nums[i]*nums[i]);
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};