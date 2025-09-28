
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
       for(int i=0;i<n-2;i++)
       {
        int j=i+1;
        int k=i+2;
          if(nums[i]+nums[j]>nums[k]&&nums[j]+nums[k]>nums[i]&&nums[i]+nums[k]>nums[j])
                    {
                        ans=max(ans,nums[i]+nums[j]+nums[k]);
                    }
       }
        return ans;
    }
};