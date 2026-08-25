class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int mul=1;
        while (1){
            int no=k*mul;
            if (find(nums.begin(),nums.end(),no)==nums.end()) return no;
            mul+=1;
            no=k*mul;
        }
    }
};