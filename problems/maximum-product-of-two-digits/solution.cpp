class Solution {
public:
    int maxProduct(int n) {
        vector<int>nos;
        while (n!=0){
            nos.push_back(n%10);
            n/=10;
        }
        sort(nos.begin(),nos.end(),greater<int>());
        return nos[0]*nos[1];
    }
};