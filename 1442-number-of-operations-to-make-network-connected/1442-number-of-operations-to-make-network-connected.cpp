class Disjoint{
    public:
    vector<int> parent;
    vector<int> size;
    Disjoint(int n)
    {
        parent.resize(n+1);
        size.resize(n+1);
        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
            size[i]=1;
        }
    }
    int findUparent(int u)
    {
        if(parent[u]==u)
        return u;
        return parent[u]=findUparent(parent[u]);
    }
    void sizeu(int u,int v)
    {
int pu=findUparent(u);
int pv=findUparent(v);
if(pu==pv)
return;
if(size[pu]<size[pv])
{
    parent[pu]=pv;
    size[pv]+=size[pu];
}
else
{
    parent[pv]=pu;
    size[pu]+=size[pv];
}

    }
};
class Solution {
public:
   
    int makeConnected(int n, vector<vector<int>>& connections) {
        Disjoint ob(n);
        int c=0;
        for(int i=0;i<connections.size();i++)
        {
            int a=connections[i][0];
            int b=connections[i][1];
            if(ob.findUparent(a)==ob.findUparent(b))
            c++;
            ob.sizeu(a,b);
        }
        map<int,int> m;
        int c1=0;
        for(int i=0;i<n;i++)
        {
           if(ob.findUparent(i)==i)
           c1++;
        }
        if(c>=c1-1)
        return c1-1;
        return -1;
       return c-1;
    }
};