class Solution {
public:
bool check(int step,int i,map<int,int> &m,vector<vector<int>> &dp,vector<int> &v)
{
  
    if(i==v.size()-1)
    return true;
    bool ans=false;
    if(dp[i][step]!=-1)
    return dp[i][step];
    for(int k=step-1;k<=step+1;k++)
    {
         if(k>0&&m.count(v[i]+k))
         {
            ans|=check(k,m[v[i]+k],m,dp,v);

         }
    }
    return dp[i][step]=ans;
}
    bool canCross(vector<int>& stones) {
        map<int,int> m;
        int n=stones.size();
        for(int i=0;i<stones.size();i++)
        m[stones[i]]=i;
        if(stones[1]!=1)
        return false;
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        bool ans=check(1,1,m,dp,stones);
        return ans;
    }
};