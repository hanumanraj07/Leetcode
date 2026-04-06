// Last updated: 4/6/2026, 5:56:28 PM
class Solution {
public:
    bool canConstruct(string r, string m) {
        for(char c : r)
            if(m.find(c)==-1) return false;
            else m.erase(m.find(c),1);
        return true;
    }
};