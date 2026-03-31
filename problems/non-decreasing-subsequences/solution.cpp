class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        int N=nums.size(); int maxval=pow(2,N);
        vector<vector<int>>ans(maxval);
        set<vector<int>> final;

        for (int val=0;val<maxval;val++){
            int temp=val;
            int idx=0;
            while (temp){
                if (temp&1){
                    ans[val].push_back(nums[idx]);
                    int ind=ans[val].size()-1;
                    if (ind>0 && ans[val][ind-1]>ans[val][ind]){
                        ans[val].pop_back();
                    }
                }
                temp/=2;
                idx++;
            }
            if (ans[val].size()>=2) final.insert(ans[val]);
        }
        return vector<vector<int>>(final.begin(),final.end());
    }
};