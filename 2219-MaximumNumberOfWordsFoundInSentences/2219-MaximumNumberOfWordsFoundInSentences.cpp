// Last updated: 4/6/2026, 5:55:51 PM
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        int maxWords = 0;

        for(string s : sentences){

            int count = 1; // at least one word

            for(char c : s){
                if(c == ' ')
                    count++;
            }

            maxWords = max(maxWords, count);
        }

        return maxWords;
    }
};