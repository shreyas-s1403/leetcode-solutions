class Solution {
public:
    long long sumAndMultiply(int n) {
        long long int ans=0,sum=0;
        string no=to_string(n);
        for (int i=0;i<no.size();i++){
            if (no[i]!='0'){
                ans=ans*10+(no[i]-'0');
                sum+=no[i]-'0';
            }
        }
        return ans*sum;
    }
};