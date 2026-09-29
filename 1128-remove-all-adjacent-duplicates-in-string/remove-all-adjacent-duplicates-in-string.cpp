class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>remove;
        for (char ch:s){
            if (remove.empty() || remove.top()!=ch) remove.push(ch);
            
            else remove.pop();
        }
        string ans="";
        while (!remove.empty()){
            ans+=remove.top();
            remove.pop();
        }   
        reverse(ans.begin(),ans.end());
        return ans;
    }
};