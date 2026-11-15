class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long ans=0,sum=0,odd=0,even=1;
        //even is initially 1 as prefix sum = 0 is even.
        int MOD=1e9+7;

        for (int n:arr){
            sum+=n;
            if (sum%2==0){
                ans+=odd;
                even++;
            }
            else{
                ans+=even;
                odd++;
            }
        }
        return ans%MOD;
    }
};