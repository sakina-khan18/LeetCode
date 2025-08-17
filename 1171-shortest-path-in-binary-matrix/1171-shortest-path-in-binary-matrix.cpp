class Solution {
public:
bool valid(int i,int j,int n,int m)
{
if(i>=0&&i<n&&j>=0&&j<m)
return true;
return false;
}
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1)
        return -1;
        int n=grid.size();int m=grid[0].size();
        vector<int> dist(grid.size()*grid[0].size(),1e9);
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            grid[i][j]=1-grid[i][j];
        }
        dist[0]=0;
        priority_queue<vector<int> ,vector<vector<int>>,greater<vector<int>>> pq;
        pq.push({0,0,0});
        while(!pq.empty())
        {
            int dis=pq.top()[0];
            int r=pq.top()[1];
            int c=pq.top()[2];
            pq.pop();
                // if (r == n - 1 && c == m - 1) return dis+1;
            int dr[]={-1,-1,-1,0,0,1,1,1};
            int dc[]={-1,0,1,-1,1,-1,0,1};
            for(int i=0;i<8;i++)
            {
                  int nr=dr[i]+r;
                  int nc=dc[i]+c;
                  int posit=nr*n+nc;
                  if(valid(nr,nc,n,m))
                  {
                       if(grid[nr][nc]==1)
                       {
                        if(dist[posit]>dis+1)
                        {
                            dist[posit]=dis+1;
                            pq.push({dis+1,nr,nc});
                        }
                       }
                  }
            }

        }
        if(dist[n*m-1]==1e9)
        return -1;
        return dist[n*m-1]+1;
    }
};