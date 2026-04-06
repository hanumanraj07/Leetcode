// Last updated: 4/6/2026, 5:55:49 PM
class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.length();
         
        for (int i = 0; i < n; i++) {
            title[i] = tolower(title[i]);
        }
         
        int i = 0;
        while (i < n) {
            int j = i;
             
            while (j < n && title[j] != ' ') {
                j++;
            }
            
            int len = j - i;
             
            if (len >= 3) {
                title[i] = toupper(title[i]);
            }
            
            i = j + 1;
        }
        
        return title;
    }
};