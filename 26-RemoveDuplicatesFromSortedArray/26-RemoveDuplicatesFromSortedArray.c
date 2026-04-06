// Last updated: 4/6/2026, 6:52:29 PM
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int k = 0;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[k]) {
            k++;
            nums[k] = nums[i];
        }
    }
    return k + 1;
}