class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>dq;

        for (int i=0;i<nums.size();i++){
            while (!dq.empty() && dq.front()<=i-k)//removing elements outside window
                dq.pop_front();
            while (!dq.empty() && nums[dq.back()]<=nums[i])//removing lesser elements
                dq.pop_back();
            dq.push_back(i);
            if (i>=k-1) ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};