// Last updated: 4/6/2026, 5:56:11 PM
#include <algorithm>

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;

        sort(expected.begin(), expected.end());

        int count = 0;
        for(int i = 0; i < heights.size(); i++) {
            if(heights[i] != expected[i]) {
                count++;
            }
        }

        return count;
    }
};