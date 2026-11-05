class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int ans=0;
        for (int i=0;i<arr1.size();i++){
            int st=0,end=arr2.size()-1;
            while (st<end){
                int mid=(st+end)/2;
                if (arr2[mid]<arr1[i]){
                    st=mid+1;
                }
                else end=mid;
            }
            if (st<arr2.size() && abs(arr2[st]-arr1[i])<=d || 
            st>0 && abs(arr2[st-1]-arr1[i])<=d) continue;
            ans++;
        }
        return ans;
    }
};