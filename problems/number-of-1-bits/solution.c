int hammingWeight(int n) {
    long int count=0;
    for (long int i=0;i<32;i++){
        unsigned int num=1;
        if (n&(num<<(i))) count++;
    } return count;
}