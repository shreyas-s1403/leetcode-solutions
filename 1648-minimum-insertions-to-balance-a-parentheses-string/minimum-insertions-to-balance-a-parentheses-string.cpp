class Solution {
public:
    int minInsertions(string s) {
        int ans=0,need=0;
        stack<int>stk;
        for (char ch:s){
            if (ch=='('){
                if (need%2==1){
                    ans++;
                    need--;
                }
                need+=2;
            }
                
            else{
                need--;
                if (need<0){
                    need=1;
                    ans++;
                }
            }
        }
        return ans+need;
    }
};