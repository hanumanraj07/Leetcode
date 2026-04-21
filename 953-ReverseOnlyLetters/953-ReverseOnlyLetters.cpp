// Last updated: 4/21/2026, 3:26:31 PM
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0, r = s.size() - 1;

        while (l < r) {
            if (!isalpha(s[l])) {
                l++;
            } 
            else if (!isalpha(s[r])) {
                r--;
            } 
            else {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }

        return s;
    }
};