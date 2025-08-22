class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int miniRow=INT_MAX,maxRow=INT_MIN,miniCol=INT_MAX,maxCol=INT_MIN;
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    if(i<miniRow)
                    miniRow=i;
                    if(i>maxRow)
                    maxRow=i;
                    if(j>maxCol)
                    maxCol=j;
                    if(j<miniCol)
                    miniCol=j;
                }
            }
        }
        int ans=(maxRow-miniRow+1)*(maxCol-miniCol+1);
        return ans;
    }
};