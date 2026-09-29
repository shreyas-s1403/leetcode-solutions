class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>stk;
        
        for (char ch:s){
            if (!stk.empty() && stk.top().first==ch){
                stk.top().second++;
                if (stk.top().second==k) stk.pop();
            }
            else{
                stk.push({ch,1});
            }
        }
        string ans="";
        while (!stk.empty()){
            ans+=string(stk.top().second,stk.top().first);
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};