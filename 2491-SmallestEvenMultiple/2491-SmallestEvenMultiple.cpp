// Last updated: 4/6/2026, 5:55:42 PM
class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n % 2 == 0) ? n : 2 * n;
    }
};