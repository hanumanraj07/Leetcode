// Last updated: 4/6/2026, 5:56:02 PM
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {

        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());

        return target == arr;
    }
};