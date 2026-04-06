// Last updated: 4/6/2026, 5:55:48 PM
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {

        unordered_set<int> s(nums.begin(), nums.end());

        while(s.count(original)) {
            original *= 2;
        }

        return original;
    }
};