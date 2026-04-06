// Last updated: 4/6/2026, 5:56:07 PM
class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int count = 0;

        for(int num : nums){

            int digits = 0;

            while(num > 0){
                num /= 10;
                digits++;
            }

            if(digits % 2 == 0)
                count++;
        }

        return count;
    }
};