class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        long long mod=1e9+7;
       
        vector<int> dp(n,0);
        dp[0]=1;
        int s=0;
        for(int i=1;i<n;i++)
        {
            if(i-delay>=0)
            s=(s+dp[i-delay])%mod;
            if(i-forget>=0)
            s=(s%mod-dp[i-forget]%mod+mod)%mod;
            dp[i]=s;
        }
        int ans=0;
        for(int i=n-forget;i<n&&i>=0;i++)
        {
            ans=(ans+dp[i])%mod;
        }
        return ans;
    }
};