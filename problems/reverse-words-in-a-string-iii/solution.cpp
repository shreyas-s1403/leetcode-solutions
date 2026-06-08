class Solution {
public:
    string reverseWords(string s) {
        int st=0,end=1;
        for (int i=0;i<=s.size();i++){
            if (s[i]==' '|| i==s.size()){
                end=i-1;
                while (st<end){
                    char temp=s[st];
                    s[st]=s[end];
                    s[end]=temp;
                    st++;
                    end--;
                }
                st=i+1;
                end=i+2;
            }
        }
        return s;
    }
};