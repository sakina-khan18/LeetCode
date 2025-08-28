class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<m;i++)
        {
            vector<int> v;
            int l=0,k=i;
            while(l<n&&k<m)
            {
                v.push_back(mat[l][k]);
                l++,k++;

            }
            sort(v.begin(),v.end());
             l=0,k=i;
             int o=0;
            while(l<n&&k<m)
            {
                mat[l][k]=v[o];
                l++,k++;
                o++;

            }
        }
        for(int i=1;i<n;i++)
        {
            vector<int> v;
            int l=i,k=0;
            while(l<n&&k<m)
            {
                v.push_back(mat[l][k]);
                l++,k++;

            }
            sort(v.begin(),v.end());
             l=i,k=0;
             int o=0;
            while(l<n&&k<m)
            {
                mat[l][k]=v[o];
                l++,k++;
                o++;

            }
        }
        
        return mat;
    }
};