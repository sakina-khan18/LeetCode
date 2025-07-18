class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        map<int,map<int,int>> m;
        m[0][0]=1;
        int sum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        for(int i=1;i<=n;i++)
        {
            for(int j=-sum;j<=sum;j++)
            {
                m[i][j]+=m[i-1][j-nums[i-1]]+m[i-1][j+nums[i-1]];
            }
        }
        return m[n][target];
    }
};