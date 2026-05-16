class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>disappear;
        int maxno=0;
        unordered_map<int,int>freq;
        for(int n:nums){
            freq[n]+=1;
            if (n>maxno){
                maxno=n;
            }
        }
        int flag=0;
        for(int i=1;i<=nums.size();i++){
            if (!freq.contains(i)){
                disappear.push_back(i);
                flag++;
            }
        }
        
        return disappear;
    }
};