class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<int>> dp(k,vector<int> (k,0));
        int res=0;
        for(auto p:nums)
        {
            p%=k;
            for(int i=0;i<k;i++)
            {
                dp[i][p]=dp[p][i]+1;
                res=max(res,dp[i][p]);
            }
        }
        return res;

    }
};