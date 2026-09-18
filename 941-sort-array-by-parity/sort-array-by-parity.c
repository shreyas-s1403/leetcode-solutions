int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int start = 0, end = numsSize - 1;
    *returnSize = numsSize;

    while (start < end) {
        if (nums[start] % 2 == 0) {
            start++;
        } else if (nums[end] % 2 != 0) {
            end--;
        } else {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }

    return nums;
}
