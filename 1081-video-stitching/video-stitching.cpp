class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time) {
        sort(clips.begin(), clips.end());

        int count = 0;
        int end = 0;
        int farthest = 0;
        int i = 0;

        while (end < time) {
            while (i < clips.size() && clips[i][0] <= end) {
                farthest = max(farthest, clips[i][1]);
                i++;
            }

            if (farthest == end)
                return -1;

            count++;
            end = farthest;
        }

        return count;
    }
};