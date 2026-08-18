class Solution {
public:
    bool isUgly(int n) {
        if (n==0) return false;
        for (int no:{2,3,5}){
            while (n%no==0) n/=no;
        }
        return n==1;
    }
};