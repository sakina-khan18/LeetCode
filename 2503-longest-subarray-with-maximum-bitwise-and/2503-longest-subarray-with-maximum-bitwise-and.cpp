class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int val=*max_element(nums.begin(),nums.end());
        int ans=1;
        int res=1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==val&&nums[i]==nums[i+1])
            {
                ans++;
                res=max(ans,res);
            }
            else
            {
                ans=1;
            }


        }
        return res;
    }
};