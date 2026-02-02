/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize=2*numsSize;
    int* result=malloc((numsSize*2)*sizeof(int));
    for (int i=0;i<(numsSize*2);i++){
        if (i<numsSize)
        result[i]=nums[i];
        else
        result[i]=nums[i-numsSize];
    }
    return result;
}