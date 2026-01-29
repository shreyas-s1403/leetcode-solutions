int reverse(int x){
   long long int r=0,n=0;
   if (x>=INT_MAX || x<=INT_MIN)
      return 0;
    else{
   if (x<0)
      n=abs(x);
    else
       n=x;
   while(n!=0){
    r=r*10+n%10;
    n/=10;
   }
   
   if (r>INT_MAX || r<INT_MIN) return 0;
   if (x<0)
      return (-r);
    else
       return r;
    }
}