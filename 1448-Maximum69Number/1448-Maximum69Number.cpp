// Last updated: 4/6/2026, 5:56:06 PM
class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '6') {
                s[i] = '9';
                break;
            }
        }

        return stoi(s);
    }
};