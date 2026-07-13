class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>altitude(gain.size()+1);
        altitude.push_back(0);
        for (int i=0;i<gain.size();i++){
            altitude[i+1]=altitude[i]+gain[i];
        }
        return *max_element(altitude.begin(),altitude.end());
    }
};