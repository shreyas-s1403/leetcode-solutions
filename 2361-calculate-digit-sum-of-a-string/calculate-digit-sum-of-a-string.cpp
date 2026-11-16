class Solution {
public:
    string digitSum(string s, int k) {
        while (s.size()>k){
            int sum=0;
            string ans="";
            int i=1;
            while (i<=s.size()){
                sum+=s[i-1]-'0';
                if (i%k==0){
                    ans+=to_string(sum);
                    sum=0;
                }
                i++;
            }
            if (s.size()%k!=0) ans+=to_string(sum);
            s=ans;
        }
        return s;
    }
};