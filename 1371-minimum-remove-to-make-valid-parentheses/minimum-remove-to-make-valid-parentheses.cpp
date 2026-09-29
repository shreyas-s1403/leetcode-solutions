class Solution {
public:
    string minRemoveToMakeValid(string s) {
        set<int>idx;
        stack<int>stk;
        for (int i=0;i<s.size();i++){
            if (s[i]=='(') stk.push(i);
            else if (s[i]==')'){
                if (!stk.empty()) stk.pop();
                else s[i]='*';
            }
        }
        while (!stk.empty()){
            s[stk.top()]='*';
            stk.pop();
        }
        string ans="";
        for (char ch:s){
            if (ch!='*') ans+=ch;
        }
        return ans;
    }
};