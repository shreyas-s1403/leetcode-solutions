class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>open;
        stack<int>close;
        int count=0;
        for (char ch:s){
            if (ch=='(') open.push(ch);
            else{
                close.push(ch);
                if (!open.empty()){
                    open.pop();
                    close.pop();
                } 
            }
        }
        return open.size()+close.size();
    }
};