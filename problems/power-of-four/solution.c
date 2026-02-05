bool isPowerOfFour(int n) {
    if (n<=0) return (false);
    int flag=0;
    while (n!=1){
        if (n%4==0) flag++;
        else if (n%4!=0) {flag=0; break;}
        n/=4;
    } 
    
    if (flag>0|| n==1 ) return (true);
    else return (false);
}