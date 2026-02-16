class Solution {
public:
    int captureForts(vector<int>& forts) {
        int j=0,ans=0;
        for (int i=0;i<forts.size();i++){
            if (forts[i]!=0){
                if (forts[i]==1 && forts[j]==-1 || forts[i]==-1 && forts[j]==1){
                    ans=max(ans,i-j-1);
                }
                j=i;
            }
        }
        return ans;
    }
};