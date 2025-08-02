class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
            continue;
        int left=i+1;
        int right=n-1;
        while(left<right)
        {
            int val=nums[i]+nums[left]+nums[right];
           
             if(val>0)
            {
             right--;
            }
            else if(val<0)
            left++;
            else
            {v.push_back({nums[i],nums[left],nums[right]});left++;
            while(nums[left]==nums[left-1]&&left<right)
            left++;
            }
        }
        }
        return v;
    }
};