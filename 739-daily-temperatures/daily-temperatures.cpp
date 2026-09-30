class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>nge(n,0);
        stack<int>stk;
        
        for (int i=n-1;i>=0;i--){
            while (!stk.empty() && temperatures[i]>=temperatures[stk.top()]){
                    stk.pop();
            }

            if (stk.empty()) nge[i]=0;
            else{
                nge[i]=stk.top()-i;
            }
            stk.push(i);
        }
        return nge;
    }
};