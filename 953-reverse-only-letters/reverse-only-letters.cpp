class Solution {
public:
    string reverseOnlyLetters(string s) {
       int start=0,end=s.size()-1;
       while (start<end){
            char ch=s[start],ch1=s[end];
            if (!isalpha(ch)) start++;
            else if (!isalpha(ch1)) end--;
            else{
                swap(s[start],s[end]);
                start++;
                end--;
            }
       }
       return s; 
    }
};