// Last updated: 4/6/2026, 5:56:48 PM
class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length())
            return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};