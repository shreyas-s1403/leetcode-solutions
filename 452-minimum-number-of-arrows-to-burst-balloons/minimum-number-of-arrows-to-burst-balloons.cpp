class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        vector<vector<int>>ans;
        ans.push_back(points[0]);
        for (int i=1;i<points.size();i++){
            if (points[i][0]<=ans.back()[1]){
                ans.back()[1]=min(points[i][1],ans.back()[1]);
            }
            else
                ans.push_back(points[i]);
        }
        return ans.size();
    }
};