class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        vector<int>ans(heights.size(),0);
        stack<pair<int,int>>stk; // [height,idx]

        for (int i=0;i<heights.size();i++){
            int h=heights[i];
            while (!stk.empty() && stk.top().first<h){
                int prev=stk.top().second;
                ans[prev]++; //previous shorter person can see the taller person
                stk.pop();
            }

            if (!stk.empty()){
                ans[stk.top().second]++; //previous taller can see the shorter person
            }
            stk.push({h,i});
        }
        return ans;
    }
};