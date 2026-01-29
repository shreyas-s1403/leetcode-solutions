bool isPowerOfThree(int n) {
    
    if (n<=0) return (false);
    int flag=0;
    while (n!=1){
        if (n%3==0) flag++;
        else if (n%3!=0) {flag=0; break;}
        n/=3;
    } 
    
    if (flag>0|| n==1 ) return (true);
    else return (false);
   
}