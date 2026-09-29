class Solution {
public:
    string decodeString(string s) {
        stack<int>nums;
        stack<string>stk;
        int num=0;
        string curr="";

        for (char ch:s){
            if (isdigit(ch)){
                num=num*10+(ch-'0');
            }
            else if (ch=='['){
                nums.push(num);
                stk.push(curr);
                num=0;
                curr="";
            }
            else if (ch==']'){
                int k=nums.top();
                nums.pop();
                string prev=stk.top();
                stk.pop();
                string temp="";
                for (int i=0;i<k;i++){
                    temp+=curr;
                }
                curr=prev+temp;
            }
            else curr+=ch;
        }
        return curr;
    }
};