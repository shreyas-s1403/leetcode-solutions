class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>n1;
        vector<int>n2;
        vector<int>n3;
        for (int i=0;i<nums.size();i++){
            if (nums[i]<pivot){
                n1.push_back(nums[i]);
            }
            else if (nums[i]==pivot){
                n2.push_back(nums[i]);
            }
            else if (nums[i]>pivot){
                n3.push_back(nums[i]);
            }
        }
        n1.insert(n1.end(),n2.begin(),n2.end());
        n1.insert(n1.end(),n3.begin(),n3.end());
        return n1;
    }
};