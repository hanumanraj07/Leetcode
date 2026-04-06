// Last updated: 4/6/2026, 5:55:37 PM
class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int ans = 0;

        for(auto s : strs) {
            bool digit = true;

            for(char c : s) {
                if(!isdigit(c)) {
                    digit = false;
                    break;
                }
            }

            ans = max(ans, digit ? stoi(s) : (int)s.size());
        }

        return ans;
    }
};