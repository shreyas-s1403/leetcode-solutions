class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int len = nums.size(), totalComb = pow(2, len);
        vector<vector<int>> final(totalComb);

        for(int j = 0; j < totalComb; j++){
            int i = j, ind = 0;
            while(i!=0){
                if(i&1){
                    final[j].push_back(nums[ind]);
                }
                i /= 2;
                ind++;
            }
        }

        return final;
    }
};