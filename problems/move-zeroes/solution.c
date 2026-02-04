void moveZeroes(int* nums, int numsSize) {
    int index=0,count=0;
    for (int i=0;i<numsSize;i++){
        if (nums[i]!=0){
            nums[index++]=nums[i];
        }
        else count++;
    }
    for (int i=numsSize-1;i>=numsSize-count;i--){
        nums[i]=0;
    }
}