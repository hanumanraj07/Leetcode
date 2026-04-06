// Last updated: 4/6/2026, 5:56:35 PM
class Solution {
public:
    bool isPowerOfFour(int n) {

        if(n <= 0)
            return false;

        while(n % 4 == 0) {
            n /= 4;
        }

        return n == 1;
    }
};