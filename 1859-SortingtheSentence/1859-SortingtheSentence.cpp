// Last updated: 5/16/2026, 10:33:41 AM
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int rows = matrix.size();
5        int cols = matrix[0].size();
6
7        int left = 0;
8        int right = rows * cols -1;
9
10        while(left <= right){
11            int mid = left + (right - left) / 2;
12            int value = matrix[mid/cols][mid % cols];
13
14            if(value == target)
15            return true;
16
17            else if(value < target)
18            left = mid + 1;
19
20            else 
21                right = mid - 1;
22        }
23
24        return false;
25    }
26};