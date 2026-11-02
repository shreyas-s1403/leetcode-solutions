class Solution {
public:

    int minCostConnectPoints(vector<vector<int>>& points) {
        int V=points.size();
        int edges=0;
        int x,y,cost=0;
        int selected[1000]={0};
        selected[0]=1;
        while (edges<V-1){
            int mini=INT_MAX;
            x=-1;
            y=-1;
            for (int i=0;i<V;i++){
                if (selected[i]){
                    for (int j=0;j<V;j++){
                        if (!selected[j]){
                            int dist=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                            if (dist<mini){
                                mini=dist;
                                x=i;
                                y=j;
                            }
                        }
                    }
                }
            }
            selected[y]=1;
            cost+=mini;
            edges++;
        }
        return cost;
    }
};