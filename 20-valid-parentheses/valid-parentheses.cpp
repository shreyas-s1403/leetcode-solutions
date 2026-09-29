class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        for (char ch:s){
            if (ch=='{' || ch=='(' || ch=='[') stk.push(ch);
            else{
                if (stk.empty()) return false;
                char popped=stk.top();
                stk.pop();
                if (ch=='}' && popped!='{' || ch==']' && popped!='[' || ch==')' && popped!='(') return false;
            }
        }
        if (stk.empty()) return true;
        return false;
    }
};