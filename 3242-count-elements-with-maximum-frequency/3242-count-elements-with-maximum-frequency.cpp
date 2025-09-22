class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> m;
        int ans=0;
        for(auto p:nums)
        {
            m[p]++;
            if(m[p]>ans)
            ans=m[p];
        }
        int count=0;
        for(auto p:m)
        {
            if(p.second==ans)
            count+=p.second;
        }
        return count;
    }
};