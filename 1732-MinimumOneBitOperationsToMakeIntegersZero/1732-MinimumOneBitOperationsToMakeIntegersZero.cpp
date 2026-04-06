// Last updated: 4/6/2026, 5:55:58 PM
class Solution {
public:
    int minimumOneBitOperations(int n) {
        int result = 0;
        
        while (n > 0) {
            result ^= n;
            n >>= 1;
        }
        
        return result;
    }
};