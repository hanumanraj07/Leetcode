// Last updated: 4/6/2026, 5:56:25 PM
class Solution {
public:
    int countSegments(string s) {

        int count = 0;

        for(int i = 0; i < s.size(); i++){

            if(s[i] != ' ' && (i == 0 || s[i-1] == ' '))
                count++;

        }

        return count;
    }
};