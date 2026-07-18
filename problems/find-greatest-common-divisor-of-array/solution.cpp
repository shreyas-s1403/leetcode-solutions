class Solution {
public:
    int findGCD(vector<int>& nums) {
        int no1=*max_element(nums.begin(),nums.end());
        int no2=*min_element(nums.begin(),nums.end());
        while (no2!=0){
            int rem=no1%no2;
            no1=no2;
            no2=rem;
        }
        return no1;
    }
};