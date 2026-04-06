// Last updated: 4/6/2026, 6:52:09 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while(left < right){
            int sum = numbers[left] + numbers[right];

            if(sum == target){
                return {left + 1, right + 1};
            }
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }

        return {};
    }
};