class Solution {
public:
int cal(int i,int j,vector<vector<int>> &dp,vector<int> &cuts)
{


    if(i+1==j)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    long long int ans=LLONG_MAX;
    for(int k=i+1;k<j;k++)
    {
      
        ans=min(ans,1LL*cal(i,k,dp,cuts)+1LL*cal(k,j,dp,cuts)+(cuts[j]-cuts[i]));
       
    }
    
    return dp[i][j]=ans;
}
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());
        int m=cuts.size();

        vector<vector<int>> dp(m,vector<int> (m,-1));
      

       int ans=cal(0,m-1,dp,cuts);
       return ans;
    }
};