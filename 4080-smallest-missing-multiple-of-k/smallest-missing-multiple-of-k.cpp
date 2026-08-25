class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>multiples;
        for (int no:nums){
            if (no%k==0) multiples.insert(no);
        }
        int no=k;
        int mul=1;
        for (int n:multiples){
            if (!multiples.contains(no)) return no;
            mul++;
            no=k*mul;
        }
        return (multiples.size()+1)*k;
    }
};