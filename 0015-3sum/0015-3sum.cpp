class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     set<vector<int>> st;
     map<int,int> m;
     for(int i=0;i<nums.size();i++)
     {
        m[nums[i]]++;
     }
     int ans=0;
     for(int i=0;i<nums.size();i++)
     {
        for(int j=i+1;j<nums.size();j++)
        {
           int a=nums[i]+nums[j];
           if(nums[j]==nums[j-1])
           { if((nums[j]==0&&ans==1)||(nums[j]!=0))
            continue;
            else if(nums[j]==0)
            {
                if(m[0]>2)
                {
                    st.insert({0,0,0});
                    ans=1;
                }
                else ans=1;
            }}
           if(m[0-a])
           {
              if((-a==nums[i]&&m[-a]>1)||(-a==nums[j]&&m[-a]>1)||(-a!=nums[i]&&-a!=nums[j]))
              {
                if(a==0&&m[a]>2)
                {
                     vector<int> v={0,0,0};
               st.insert(v);
                }
                else if(a!=0)
                {
                     vector<int> v={nums[i],nums[j],0-a};
               sort(v.begin(),v.end());
               st.insert(v);
                }
              }
           }
        }
     }
     vector<vector<int>> res;
     for(auto p:st)
     {
        res.push_back(p);
     }
     return res;
    }
};