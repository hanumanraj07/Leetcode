// Last updated: 4/6/2026, 5:56:49 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
          return n > 0 && (n & (n - 1)) == 0;
    }
};