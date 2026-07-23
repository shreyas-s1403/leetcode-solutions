class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       int odd=0;
       int even=0;
       int cnt=0,no=1;
        while (cnt!=n){
            if (no%2==0){
                even+=no;
                cnt++;
            }
            no++;
            
        }
        cnt=0;
        no=1;
        while (cnt!=n){
            if (no%2!=0){
                odd+=no;
                cnt++;
            }
            no++;
        }
        int a=even,b=odd;
        while (b!=0){
            int rem=a%b;
            a=b;
            b=rem;
        }
        return a;
    }
};