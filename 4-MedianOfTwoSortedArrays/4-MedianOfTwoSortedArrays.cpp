// Last updated: 4/6/2026, 6:52:33 PM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        merge(nums1.begin(),nums1.end(),
              nums2.begin(),nums2.end(),
              back_inserter(merged));

        int n1;
        int n2;
        int n3;

        if(merged.size()%2==0){
            n1 = merged[(merged.size()/2)];
            n2 = merged[(merged.size()/2)-1];

            return (n1+n2)/2.0;
        }
        else{
            return merged[merged.size()/2];
        }

    }
};