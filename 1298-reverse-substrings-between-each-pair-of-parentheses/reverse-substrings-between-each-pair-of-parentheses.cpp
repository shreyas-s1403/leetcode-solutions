class Solution {
public:
    string reverseParentheses(string s) {
        string ans="";
        stack<char>stk;
        for (int i=0;i<s.size();i++){
            if (s[i]=='('){
                stk.push(s[i]);
            }
            else if (s[i]==')'){
                while (stk.top()!='('){
                    ans+=stk.top();
                    stk.pop();
                }
                stk.pop();
                for (int k=0;k<ans.size();k++) stk.push(ans[k]);
                ans="";
            }
            else if (isalpha(s[i])) stk.push(s[i]);
        }
        while (!stk.empty()){
            if (stk.top()!='(' && stk.top()!=')') ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};