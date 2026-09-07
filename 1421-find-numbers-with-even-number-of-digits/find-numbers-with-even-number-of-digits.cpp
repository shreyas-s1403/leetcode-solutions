class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for (int n:nums){
            int dc=0;
            while (n!=0){
                dc+=1;
                n/=10;
            }
            if (dc%2==0)  cnt++;
        }
        return cnt;
    }
};