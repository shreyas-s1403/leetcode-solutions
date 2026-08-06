class Solution {
public:
    int smallestNumber(int n, int t) {
        for (int no=n;no<=n+10;no++){
            int prod=1,i=no;
            while (i!=0){
                prod*=i%10;
                i/=10;
            } 
            if (prod%t==0) return no;
        }
        return 0;
    }
};