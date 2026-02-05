int thirdMax(int* nums, int numsSize) {
    if (numsSize==1) return nums[0];
    else if (numsSize==2) return (nums[0]>nums[1])? nums[0]:nums[1];
    long int fmax=LONG_MIN,smax=LONG_MIN,tmax=LONG_MIN;
    for (int i=0;i<numsSize;i++){
        
        
        if (nums[i]>fmax){
            tmax=smax;
            smax=fmax;
            fmax=nums[i];
        }
        if (nums[i]<fmax && nums[i]>smax) {tmax=smax; smax=nums[i];}
        if (nums[i]<smax && nums[i]>tmax) tmax=nums[i];
        
        
    }  
    if (tmax==LONG_MIN) return fmax;
    else return tmax;
} 
  /*1 0 0
  2 1 0
  5 2 1
  5 2 1
  5 3 2*/