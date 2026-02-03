int maxSubArray(int* nums, int numsSize) {
    if (numsSize==1) return nums[0];
    int max=INT_MIN,sum=0;
    for (int i=0;i<numsSize;i++){
        sum=(sum+nums[i]>nums[i])?sum+nums[i]:nums[i];
        if (max<sum) max=sum;
        if (sum<0) sum=0;
    } return max;
}