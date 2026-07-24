class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int>start={0,0};
        for (char ch:moves){
            if (ch=='U') start[0]=start[0]-1;
            if (ch=='D') start[0]=start[0]+1;
            if (ch=='R') start[1]=start[1]+1;
            if (ch=='L') start[1]=start[1]-1;
        }
        if (start[0]==0 && start[1]==0) return true;
        return false;
    }
};