class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero=0;
        int l=0;
        int e=0;
        int n=nums.size();
        int ans=0,res=0;
        int pos=0;
        while(e<n)
        {
            if(nums[e]==0)
            {zero++;
            if(zero==1)
            pos=e;
            }
            if(zero==0)
            {
                ans=e-l;

            }
            else if(zero==1)
            ans=e-l;
            else
            {
               
                l=pos+1;
                zero=1;
                pos=e;
            }
            res=max(res,ans);
            
            e++;
        }
       
        return res;
        
    }
};