class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       int sum=0;
       for (int i=0;i<arr.size();i++){
        int currsum=0;
        for (int j=i;j<arr.size();j++){
            currsum+=arr[j];
            if((i-j+1)%2!=0) sum+=currsum;
        }
       }
       return sum; 
    }
};