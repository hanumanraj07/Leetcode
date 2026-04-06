// Last updated: 4/6/2026, 5:55:30 PM
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {

        unordered_set<string> s(words.begin(), words.end());
        int count = 0;

        for(string word : words){

            string rev = word;
            reverse(rev.begin(), rev.end());

            if(s.count(word) && s.count(rev) && word != rev){
                count++;
                s.erase(word);
                s.erase(rev);
            }
        }

        return count;
    }
};