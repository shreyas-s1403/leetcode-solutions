class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>nge(nums.size(),-1);
        stack<int>stk;
        int n=nums.size();
        //circular adding twice the elements in nums
        for (int i=2*nums.size()-1;i>=0;i--){
            while (!stk.empty() && stk.top()<=nums[i%n]) stk.pop();
            if (!stk.empty()) nge[i%n]=stk.top();
            stk.push(nums[i%n]);
        }
        return nge;
    }
};