class Solution {
public:
vector<int> parent;
vector<int> siz;
void unio(int u,int v)
{
    int pu=par(u);
    int pv=par(v);
    if(pu==pv)
    return;
    if(siz[pu]<=siz[pv])
    {
      parent[pu]=pv;
      siz[pv]+=siz[pu];
    }
    else
    {
        parent[pv]=pu;
        siz[pu]+=siz[pv];
    }
}
int par(int u)
{
    if(parent[u]==u)
    return u;
    return parent[u]=par(parent[u]);
}
bool check(int m,vector<vector<int>> &v,int n,int k)
{
    parent.clear();
    siz.clear();
   parent.resize(n);
   siz.resize(n);
   
   for(int i=0;i<n;i++)
 {  siz[i]=1;
 parent[i]=i;}
   for(int i=0;i<v.size();i++)
   {
    int a=v[i][0];
    int b=v[i][1];
    int c=v[i][2];
    if(c<=m)
    {
        unio(a,b);

    }

   }
   map<int,int> mp;
   for(int i=0;i<n;i++)
   {
    mp[par(i)]++;
   }
   if(mp.size()<=k)
   return true;
   return false;


}
    int minCost(int n, vector<vector<int>>& edges, int k) {
        int maxi=0;
        
        for(int i=0;i<edges.size();i++)
        {
            int c=edges[i][2];
            if(c>maxi)
            {
                maxi=c;
            }
        }
        int ans=INT_MAX;
        int start=0;
        int end=maxi;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(check(mid,edges,n,k))
            {
                ans=min(ans,mid);
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
    }
};