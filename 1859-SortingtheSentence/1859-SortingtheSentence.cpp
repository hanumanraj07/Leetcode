// Last updated: 5/16/2026, 10:43:19 AM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int left = 0;
5        int right = nums.size()-1;
6
7        while(left < right){
8            int mid = left + (right - left)/2;
9
10            if(nums[mid] > nums[right]){
11                left = mid +1;
12
13            }
14            else {
15                right = mid;
16            }
17        }
18        return nums[left];
19    }
20};