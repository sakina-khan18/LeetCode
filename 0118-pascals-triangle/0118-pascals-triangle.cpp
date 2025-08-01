class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
    
    for(int i=0;i<numRows;i++)
    {
        for(int j=0;j<=i;j++)
        {
        if(j==0||j==i)
        res[i].push_back(1);
        else
       { int b=res[i-1][j]+res[i-1][j-1];
       res[i].push_back(b);}
        }
    }
    return res;
    }
};