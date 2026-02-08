class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>max;
        for (int n:nums){
            if (max.find(n)==max.end()) max[n]=1;
            else max[n]++;
        }
        int me=0,maxfreq=0;
        for (auto it:max){
            if (it.second>maxfreq){
                maxfreq=it.second;
                me=it.first;
            }
        }
        return me;
    }
};