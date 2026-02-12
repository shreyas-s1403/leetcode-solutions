int maxSubarraySumCircular(int* nums, int numsSize) {
    int total_sum=0,currmax=0,maxsum=0;
    int minsum=INT_MAX,currmin=0,max=INT_MIN;
    for (int i=0;i<numsSize;i++){
        if (max<nums[i]) max=nums[i];
        total_sum+=nums[i];
        currmax+=nums[i];
        currmin+=nums[i];
        if (currmin>0) currmin=0;
        if (currmax>maxsum) maxsum=currmax;
        if (currmax<0) currmax=0;
        if (currmin<minsum) minsum=currmin;
    }
    if(maxsum==0) return max;
    return (total_sum-minsum)>maxsum?(total_sum-minsum):maxsum;
}