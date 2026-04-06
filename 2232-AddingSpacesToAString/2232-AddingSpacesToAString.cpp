// Last updated: 4/6/2026, 5:55:50 PM
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result;
        int j = 0;  // pointer for spaces
        
        for (int i = 0; i < s.length(); i++) {
            
            // If current index matches spaces index
            if (j < spaces.size() && i == spaces[j]) {
                result += " ";
                j++;
            }
            
            result += s[i];
        }
        
        return result;
    }
};