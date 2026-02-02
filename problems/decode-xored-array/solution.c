/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize) {
    *returnSize=encodedSize+1;
    int* result=malloc((encodedSize+1)*sizeof(int));
    result[0]=first;
    for (int i=0;i<encodedSize;i++){
        result[i+1]=result[i]^encoded[i];
    }
    
    return result;
}