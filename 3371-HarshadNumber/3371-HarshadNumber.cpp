// Last updated: 4/6/2026, 5:55:26 PM
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int temp = x;

        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if(x % sum == 0)
            return sum;
        else
            return -1;
    }
};