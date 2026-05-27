// Last updated: 5/27/2026, 2:22:45 PM
1class Solution {
2public:
3    vector<vector<int>> generate(int numRows) {
4        vector<vector <int>> triangle;
5
6        for(int i = 0; i < numRows; i++){
7            vector<int> row(i + 1 , 1);
8
9            for(int j = 1; j < i; j++){
10                row[j] = triangle[i-1][j-1] + triangle[i-1][j];
11
12            }
13            triangle.push_back(row);
14        }
15        return triangle;
16    }
17};