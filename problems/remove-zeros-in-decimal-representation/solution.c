long long removeZeros(long long n) {
   long long num=0;
   while (n!=0){
    if (n%10!=0){
    num=(num*10)+n%10;}
    n/=10;
   }
   long long int rev=0;
   while (num!=0){
    rev=rev*10+num%10;
    num/=10;
   }
   return rev;
}