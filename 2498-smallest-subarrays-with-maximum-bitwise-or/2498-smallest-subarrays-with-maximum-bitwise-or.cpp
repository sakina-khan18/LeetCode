class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n=nums.size();
       vector<int> res(n,1);
       vector<int> last(31,0);
       for(int i=n-1;i>=0;i--)
       {
        for(int j=0;j<31;j++)
        {
            if(nums[i]&(1<<j))
            last[j]=i;
        }
         int ans=i;
       for(int j=0;j<31;j++)
       {
        if(last[j]!=-1)
        ans=max(ans,last[j]);
       }
            
       res[i]=ans-i+1;
       }
        return res;
    }
};