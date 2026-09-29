class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>stk;
        stk.push(0);
        for (char ch:s){
            if (ch=='('){
                stk.push(0);
            }
            else{
                int inside=stk.top();
                stk.pop();
                int score=(inside==0) ?1:2*inside;
                stk.top()+=score;
            }
        }
        return stk.top();
    }
};