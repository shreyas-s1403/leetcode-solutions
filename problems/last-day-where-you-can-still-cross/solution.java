class Solution {
    int neighbours[][]=new int[][]{{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
    public int latestDayToCross(int row, int col, int[][] cells) {
        int setarr[]=new int[row*col+2];
        for(int i=0;i<=row*col+1;i++){
            setarr[i]=i;
        }
        boolean water[]=new boolean[row*col];
        int counter=0;
        for(int cell[]:cells){
            int r=cell[0]-1;
            int c=cell[1]-1;
            water[getcellindex(col,r,c)-1]=true;
            for(int adj[]:neighbours){
                int ar=r+adj[0];
                int ac=c+adj[1];
                if(ar>=0 && ar<row && ac>=0 && ac<col && water[getcellindex(col,ar,ac)-1]){
                    join(setarr,getcellindex(col,r,c),getcellindex(col,ar,ac));
                }
                if(c==0){
                    join(setarr,0,getcellindex(col,r,c));
                }
                if(c==col-1){
                    join(setarr,row*col+1,getcellindex(col,r,c));
                }
            }
            if(find(setarr,0)==find(setarr,row*col+1)){
                break;
            }
            counter++;
        }
        return counter;
    }
    private int getcellindex(int col,int r,int c){
    return col*r+c+1;
 }
private void join(int setarr[],int a,int b){
    setarr[find(setarr,a)]=setarr[find(setarr,b)];
 }
private int find(int setarr[],int i){
    if(setarr[i]!=i){
        setarr[i]=find(setarr,setarr[i]);
    }
    return setarr[i];
 }
}