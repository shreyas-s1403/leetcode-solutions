class Solution {
public:
    bool isValid(string s) {
        stack<char>bracket;
        for (char ch:s){
            if (ch=='[' || ch=='{' || ch=='(') bracket.push(ch);
            else{
                if (bracket.empty()) return false;
                char popped=bracket.top();
                bracket.pop();
                 if ((ch == '}' && popped != '{') || 
                    (ch == ']' && popped != '[') || 
                    (ch == ')' && popped != '(')) return false;
            }
        }
        if (bracket.empty()) return true;
        return false;
    }
};