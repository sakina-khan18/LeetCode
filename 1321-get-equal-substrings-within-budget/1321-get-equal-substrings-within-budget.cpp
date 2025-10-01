class Solution {
public:
 bool check(int mid,string s,string t,int mc)
 {
    int ans=INT_MAX;
    int l=0,r=0;
    int n=s.length();
    int value=0;
    while(r<n)
    {
        int cost=abs(s[r]-t[r]);
        if(r-l+1<=mid)
        {
            value+=cost;
        }
        else
        {
            value-=abs(s[l]-t[l]);
            l++;
            value+=cost;
        }
        if(r-l+1>=mid)
        {
            ans=min(ans,value);
            
        }
        r++;

    }
    return ans<=mc;
 }
    int equalSubstring(string s, string t, int mc) {
        int start=0;
        int end=s.length();
        int ans=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(check(mid,s,t,mc))
            {
                ans=mid;
                start=mid+1;

            }
            else


            {
                end=mid-1;
            }
        }
        return ans;
    }
};