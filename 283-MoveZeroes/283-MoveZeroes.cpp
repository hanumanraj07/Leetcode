// Last updated: 4/6/2026, 5:56:38 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int j = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};