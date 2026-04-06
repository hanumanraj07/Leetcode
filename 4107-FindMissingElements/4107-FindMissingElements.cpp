// Last updated: 4/6/2026, 5:55:16 PM
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> arr;
        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++) {
            int current = nums[i-1];
            int next = nums[i];

            for(int j = current + 1; j < next; j++) {
                arr.push_back(j);
            }
        }

        return arr;
    }
};
