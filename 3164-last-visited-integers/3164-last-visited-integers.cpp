class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        vector<int> seen;
        int count=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==-1)
            {
                count++;
                if(count>seen.size())
                ans.push_back(-1);
                else
                {
                    ans.push_back(seen[seen.size()-count]);
                   
                }
            }
           
            else
           { seen.push_back(nums[i]);
           count=0;}
        }
        return ans;
    }
};