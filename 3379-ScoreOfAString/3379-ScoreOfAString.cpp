// Last updated: 4/6/2026, 5:55:25 PM
class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;

        for(int i = 1; i < s.length(); i++){
            score += abs(s[i] - s[i-1]);
        }

        return score;
    }
};