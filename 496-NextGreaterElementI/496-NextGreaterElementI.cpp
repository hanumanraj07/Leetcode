// Last updated: 6/2/2026, 2:45:33 PM
1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4    vector <int> ans;
5        for(int i=0;i<nums1.size();i++){
6
7     int found = 0;
8    int greater = -1;
9for(int j = 0;j<nums2.size();j++){
10    if(nums1[i]==nums2[j])
11    found = 1;
12
13    else if(found && nums2[j]>nums1[i]){
14        greater = nums2[j];
15        break;
16    }
17}
18ans.push_back(greater);
19        }
20
21        return ans;
22    }
23};