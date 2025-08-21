class Solution {
public:
 
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> graph(m,vector<int> (n,0));
        for(int i=0;i<guards.size();i++)
        {
            int a=guards[i][0];
            int b=guards[i][1];
            graph[a][b]=1;
        }
        for(int i=0;i<walls.size();i++)
        {
            int a=walls[i][0];
            int b=walls[i][1];
            graph[a][b]=2;

        }
        vector<vector<int>> vis(m,vector<int> (n,0));
       
        

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(graph[i][j]==1)
                {
                   for(int k=i-1;k>=0;k--)
                   {
                    if(graph[k][j]==0)
                    graph[k][j]=3;
                    else if(graph[k][j]==2||graph[k][j]==1)
                    break;
                  
                   }
                   for(int k=i+1;k<m;k++)
                   {
                    if(graph[k][j]==0)
                    graph[k][j]=3;
                    else if(graph[k][j]==2||graph[k][j]==1)
                    break;
                    

                   }
                   for(int k=j-1;k>=0;k--)
                   {
                    if(graph[i][k]==0)
                    graph[i][k]=3;
                    else if(graph[i][k]==2||graph[i][k]==1)
                    break;
                   }
                   for(int k=j+1;k<n;k++)
                   {
                    if(graph[i][k]==0)
                    graph[i][k]=3;
                    else if(graph[i][k]==2||graph[i][k]==1)
                    break;
                   }

                }
            }
        }
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(graph[i][j]==0)
                c++;
            }
        }
        return c;
    }
};