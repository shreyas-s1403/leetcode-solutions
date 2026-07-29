class Solution {
public:

    bool dfs(vector<int>& arr,int i){
        if (i<0 || i>arr.size()-1) return false;
        if (arr[i]==-1) return false;
        if (arr[i]==0) return true;
        int jump=arr[i];
        arr[i]=-1;
        return (dfs(arr,i+jump)||dfs(arr,i-jump));
    }

    bool canReach(vector<int>& arr, int start) {
        return dfs(arr,start);
    } 
};

/* Save the jump value before marking the index as visited.
But consider index 0:

arr[0] = 4

After marking:

arr[0] = -1;

You call:

dfs(arr, -1); // wrong
dfs(arr, 1);  // wrong

You should have called:

dfs(arr, 4);
dfs(arr, -4);*/
