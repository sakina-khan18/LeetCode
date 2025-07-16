class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++)
        {
            for(auto p:nums[i])
            {
                v.push_back({p,i});
            }
        }
        sort(v.begin(),v.end());
        int l=0;
        int r=0;
        map<int,int> m;
        int start=0;
        int end=INT_MAX-2;
        int ans=INT_MAX;
        for(int i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
        while(r<v.size())
        {
            int a=v[r].second;
            m[a]++;
            while(m.size()==n)
            {
                if(v[r].first-v[l].first+1<ans)
                {
                    ans=v[r].first-v[l].first+1;
                    start=v[l].first;
                    end=v[r].first;
                }
                if(v[r].first-v[l].first==ans&&v[l].first<start)
                {
                    start=v[l].first;
                    
                }
                
                   m[v[l].second]--;
                if(m[v[l].second]==0)
                m.erase(v[l].second);
                l++;
                
            }
           
            r++;
        }
        return {start,end};
    }
};