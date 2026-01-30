int searchInsert(int* nums, int numsSize, int target) {
    int index1=0,index=0,index2=0;
    int f=0;
    for (int i=0;i<numsSize;i++){
        if ((nums[i]-1)==target) { f=2;index1=i;}
        if ((nums[i]+1)==target) { f=3;index2=(i+1);}
        if (nums[i]==target){  index=i; f=1; break;}
    }
    if (f==1) return index;
    else if (f==2) return index1;
    else if (f==3) return index2;
    if (nums[numsSize-1]<target) return numsSize;
    else return (0);
}