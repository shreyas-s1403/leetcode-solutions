class Solution {
public:
    bool canAliceWin(int n) {
        if (n<10) return false;
        int cnt=10;
        int check=0;
        while (n>=cnt){
            n-=cnt;
            cnt--;
            check++;
        }
        return check%2!=0;
    }
};