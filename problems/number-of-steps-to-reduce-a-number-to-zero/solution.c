int numberOfSteps(int num) {
    int steps=0;
    while (num!=0){
        if (num%2==0) {num/=2; steps++; continue;}
        else {num-=1; steps++;}
    }
    return steps;
}