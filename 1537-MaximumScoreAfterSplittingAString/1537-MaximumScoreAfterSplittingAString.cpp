// Last updated: 4/6/2026, 5:56:03 PM
class Solution {
public:
    int maxScore(string s) {

        int totalOnes = 0;

        for(char c : s){
            if(c == '1') totalOnes++;
        }

        int zerosLeft = 0;
        int onesRight = totalOnes;
        int maxScore = 0;

        for(int i = 0; i < s.size() - 1; i++){

            if(s[i] == '0'){
                zerosLeft++;
            } else {
                onesRight--;
            }

            maxScore = max(maxScore, zerosLeft + onesRight);
        }

        return maxScore;
    }
};