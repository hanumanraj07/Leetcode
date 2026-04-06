// Last updated: 4/6/2026, 5:55:55 PM
class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 1; i < s.length(); i += 2) {
            int shift = s[i] - '0';    
            s[i] = s[i - 1] + shift; 
        }
        return s;
    }
};