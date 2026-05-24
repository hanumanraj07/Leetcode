// Last updated: 5/24/2026, 1:27:48 PM
1class Solution {
2public:
3    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
4        int target = k * threshold;
5        int sum = 0;
6        int count= 0;
7
8        for(int i =0; i < arr.size(); i++){
9            sum += arr[i];
10
11            if(i >= k){
12                sum -= arr[i - k];
13            }
14            if(i >= k -1 && sum >= target){
15                count++;
16            }
17        }
18        return count;
19    }
20};