class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<vector<int>> intervals;

        for(int i=0;i<=n;i++){
            intervals.push_back({i-ranges[i], i+ranges[i]});
        }

        sort(intervals.begin(), intervals.end());

        int taps = 0;
        int currentEnd = 0;
        int farthest = 0;
        int i = 0;

        while(currentEnd < n){

            while(i < intervals.size() && intervals[i][0] <= currentEnd){
                farthest = max(farthest, intervals[i][1]);
                i++;
            }

            if(farthest == currentEnd)
                return -1;

            taps++;
            currentEnd = farthest;
        }

        return taps;
    }
};