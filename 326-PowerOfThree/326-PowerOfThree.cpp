// Last updated: 4/6/2026, 5:56:36 PM
class Solution {
public:
    bool isPowerOfThree(int n) {
          if (n <= 0) return false;
        while (n % 3 == 0) n /= 3;
        return n == 1;
    }
};