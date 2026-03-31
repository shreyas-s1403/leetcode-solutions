class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size(), totalComb = pow(2,len);
        vector<vector<int>> final(totalComb);
        set<vector<int>> uniques;

        for(int i = 0; i < totalComb; i++){
            int ind = 0, ref = i;

            while(ref){
                if(ref&1){
                    final[i].push_back(nums[ind]);
                }
                ind++;
                ref/=2;
            }
            uniques.insert(final[i]);
        }

        vector<vector<int>> result;

        for(auto val : uniques){
            result.push_back(val);
        }

        return result;
    }
};