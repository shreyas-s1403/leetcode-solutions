bool isHappy(int n) {
    while (n>=10){
        int no=0;
        while (n!=0){
            no+=((n%10)*(n%10));
            n/=10;
        }
        n=no;
    }
    if (n==1 || n==7) return (true);
    else return (false);
}