class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        if(nums.size()==1)
        return false;
        int n=nums.size();
        if (total % 2 != 0) return false;
        int sum = total / 2;
       vector<int> dp(total+1,0);
        dp[0]=1;
        dp[nums[0]]=1;
       for(int i=1;i<n;i++)
       {
        for(int j=sum;j>=nums[i];j--)
        {
          dp[j]=dp[j]||dp[j-nums[i]];
          if(dp[sum])
          return true;
           

        }
       }
       return dp[sum];
    }
};
