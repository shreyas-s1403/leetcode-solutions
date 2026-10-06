class Solution {
public:
    int minAddToMakeValid(string s) {
        int open=0,close=0;
        for (char ch:s){
            if (ch=='(') open++;
            else{
                close++;
                if (open!=0){
                    open--;
                    close--;
                } 
            }
        }
        return open+close;
    }
};