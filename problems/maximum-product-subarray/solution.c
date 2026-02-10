int maxProduct(int* nums, int numsSize) {
    int max=nums[0],max1=0,prod=1;
    if (numsSize==1) return nums[0];
    for (int i=0;i<numsSize;i++){
        prod*=nums[i];
        if (max<prod) max=prod;
        if (prod==0) prod=1;
    }
    prod=1;
    for (int i=numsSize-1;i>=0;i--){
        prod*=nums[i];
        if (max1<prod) max1=prod;
        if (prod==0) prod=1;
    }
    return (max>max1? max:max1);
}