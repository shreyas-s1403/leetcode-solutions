class Solution {
    public int swimInWater(int[][] grid) {
        int r=grid.length,c=grid[0].length;
        boolean vis[][]=new boolean [r][c];
        PriorityQueue<int[]> minH=new PriorityQueue<>((a,b)->a[0]-b[0]);
        minH.add(new int[]{grid[0][0],0,0});
        vis[0][0]=true;
        int maxHt=grid[0][0];
        int diff[]={0,1,0,-1,0};
        while (!minH.isEmpty()){
            int cell[]=minH.poll();
            maxHt=Math.max(maxHt,cell[0]);
            int row=cell[1],col=cell[2];
            for (int i=0;i<4;i++){
            int ar=row+diff[i],ac=col+diff[i+1];
            if (ar>-1 && ac>-1 && ar<grid.length && ac<grid[0].length){
                if (ar==r-1 && ac==c-1){
                    return Math.max(maxHt,grid[ar][ac]); 
                }
                if (!vis[ar][ac]){
                    minH.add(new int[]{grid[ar][ac],ar,ac});
                    vis[ar][ac]=true;
                }
            }
            }
        }
        return maxHt;
    }
}