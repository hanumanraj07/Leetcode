// Last updated: 4/21/2026, 3:27:02 PM
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, ans = "";

        while (ss >> word) {    
            ans = word + " " + ans;
        }

        if (!ans.empty()) ans.pop_back(); 
        return ans;
    }
};