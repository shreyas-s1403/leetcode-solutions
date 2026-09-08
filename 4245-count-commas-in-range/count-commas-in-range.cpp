class Solution {
public:
    int countCommas(int n) {
       if (n>=1000 && n<=100000){
        int cnt=0;
        int n1=1000;
        while (n1<=n){
            cnt++;
            n1++;
        }
        return cnt;
       }
       return 0;
    }
};