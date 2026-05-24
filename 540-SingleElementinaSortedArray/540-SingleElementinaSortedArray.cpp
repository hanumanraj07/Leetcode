// Last updated: 5/24/2026, 12:56:12 PM
1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        int left = 0;
5        int right = nums.size() - 1;
6
7        while (left < right){
8            int mid = left + (right - left)/2;
9
10            if(mid % 2 == 1){
11                mid--;
12            }
13
14            if(nums[mid]==nums[mid + 1]){
15                left = mid + 2;
16            }
17            else{
18                right = mid;
19            }
20        }
21        return nums[left];
22    }
23};