class Solution {
public:
    int trapRainWater(vector<vector<int>>& h) {
        
        priority_queue<vector<int>,vector<vector<int>> ,greater<vector<int>>> pq;
        int n=h.size();
        int m=h[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0||i==n-1||j==0||j==m-1)
                {
                    vis[i][j]=1;
                    pq.push({h[i][j],i,j});
                }
            }
        }
        int res=0;
        vector<int> dr={-1,0,0,1};
        vector<int> dc={0,-1,1,0};
        while(!pq.empty())
        {
            int ht=pq.top()[0];
            int i=pq.top()[1];
            int j=pq.top()[2];
            pq.pop();
            for(int k=0;k<4;k++)
            {
                int nr=i+dr[k];
                int nc=j+dc[k];
                if(nr>=0&&nr<n&&nc>=0&&nc<m&&!vis[nr][nc])
                {
                    vis[nr][nc]=1;
                    int h2=h[nr][nc];
                    if(h2<ht)
                    res+=ht-h2;
                    pq.push({max(h2,ht),nr,nc});
                    
                }
            }
        }
        return res;
    }
};