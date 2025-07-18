class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count=0;
        int sum=accumulate(nums.begin(),nums.end(),0);
        if((sum-2*nums[0])%2==0)
        count++;
        for(int i=1;i<nums.size()-1;i++)
        {
            nums[i]+=nums[i-1];
            int right=sum-nums[i];
            if((right-nums[i])%2==0)
            count++;
        }
        return count;
    }
};