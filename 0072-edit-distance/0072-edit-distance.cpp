class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.length()+1,vector<int>(word2.length()+1,INT_MAX));
        for(int i=0;i<=word1.length();i++)
        dp[i][0]=i;
        for(int j=0;j<=word2.length();j++)
        dp[0][j]=j;
        int n=word1.length();
        int m=word2.length();
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(word1[i-1]==word2[j-1])
                dp[i][j]=dp[i-1][j-1];
                if(word1[i-1]!=word2[j-1])
                {
                    
                   dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
                }
            
                
                
            }
        }
        return dp[n][m];
    }
};