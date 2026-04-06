// Last updated: 4/6/2026, 5:56:47 PM
class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
        int sum = 0;

        while (num > 0) {
            sum += num % 10;
            num = num / 10;
        }

        num = sum;
    }

    return num;
    }
};