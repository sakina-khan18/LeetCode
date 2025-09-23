class Solution {
public:
    vector<int> dfs(vector<vector<int>>&adj,int node,int parent,string&labels,vector<int>&v){
        vector<int> freq(26,0);
        freq[labels[node]-'a']++;
        for(auto p:adj[node])
        {
            if(p==parent)
            continue;
            vector<int> child=dfs(adj,p,node,labels,v);
            for(int i=0;i<26;i++)freq[i]+=child[i];
        }
        v[node]=freq[labels[node]-'a'];
        return freq;
    }
    vector<int> countSubTrees(int n,vector<vector<int>>&edges,string labels)
    {
        vector<vector<int>> adj(n);
        for(int i=0;i<edges.size();i++)
        {
            int a=edges[i][0],b=edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        vector<int> v(n);
        dfs(adj,0,-1,labels,v);
        return v;
    }
};
