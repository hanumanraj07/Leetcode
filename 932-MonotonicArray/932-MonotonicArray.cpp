// Last updated: 4/6/2026, 5:56:13 PM
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i-1]) {
                decreasing = false;
            }
            if(nums[i] < nums[i-1]) {
                increasing = false;
            }
        }

        return increasing || decreasing;
    }
};