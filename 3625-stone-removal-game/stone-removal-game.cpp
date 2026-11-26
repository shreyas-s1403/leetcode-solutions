class Solution {
public:
    bool canAliceWin(int n) {
        if (n<10) return false;
        int cnt=10;
        int check=0;
        while (n>0){
            n-=cnt;
            cnt--;
            check++;
        }
        if (n<0 && check%2==0){
            return true;
        }
        else if (n<0 && check%2!=0){
            return false;
        }
        else if (n==0 && check%2==0) return false;
        else if (n==0 && check%2!=0) return true;
        return false;
    }
};