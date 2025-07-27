class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        vector<vector<int>> dp(n,vector<int> (n,0));
        int count=0;
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
            count++;
        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {dp[i][i+1]=1;
            count++;}
        }
        for(int i=2;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                 int k=i+j;
                 if(s[j]==s[k]&&dp[j+1][k-1]==1)
                 {
                    dp[j][k]=1;
                    count++;
                 }
            }
        }
        return count;

        
    }
};