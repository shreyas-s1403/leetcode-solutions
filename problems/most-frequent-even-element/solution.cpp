class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>freq;
        for (int n:nums){
            if (n%2==0){
                freq[n]++;
            }
        }
        int count=0;
        int ele=-1;
        for (auto it:freq){
            if (it.second>count){
                count=it.second;
                ele=it.first;
            } 
        }
        return ele;
    }
};