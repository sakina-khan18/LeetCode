class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int i=0;
        int j=grid.size()-1;
        for(int k=0;k<grid.size()-1;k++)
        {
            vector<int> v;
            int m=j,l=k;
            while(l>=0)
            { 
                v.push_back(grid[l][m]);
                m--;
                l--;

            }
            for(int u=0;u<v.size();u++)
            cout<<v[u]<<" ";
            cout<<endl;
            sort(v.begin(),v.end(),greater<int>());
             m=j,l=k;
             int o=0;
            while(l>=0)
            { 
                grid[l][m]=v[o];
                o++;
                m--;
                l--;

            }

        }
        for(int k=0;k<=grid.size()-1;k++)
        {
            vector<int> v;
            int l=k,m=0;
            while(l<=grid.size()-1)
            {
                v.push_back(grid[l][m]);
                l++;
                m++;
            }
            l=k,m=0;
            int o=0;
            sort(v.begin(),v.end(),greater<int>());
            while(l<=grid.size()-1)
            {
               grid[l][m]=v[o];
                l++;
                m++;
                o++;
            }

        }
        return grid;
    }
};