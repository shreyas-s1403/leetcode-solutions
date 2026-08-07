class Solution {
public:
    vector<int> constructRectangle(int area) {
        int side1=sqrt(area);
        for (int i=side1;i>=1;i--){
            if (i*(area/i)==area) return {area/i,i};
        }
        return {area,1};
    }
};