class Solution{
    public:
        int repeatedNTimes(vector<int>&nums){
            int n=nums.size();
            map<int,int>freq;
            for(int i=0;i<n;i++){
                freq[nums[i]]++;
            }
            for(auto&ele:freq){
                if(ele.second*2==n){ 
                    return ele.first;
                }
            }
            return -1;
}
};
