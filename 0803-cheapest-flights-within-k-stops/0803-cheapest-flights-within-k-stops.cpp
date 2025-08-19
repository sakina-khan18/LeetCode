class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<vector<int>>> adj(n);
        for(auto it:flights)
        {
            int a=it[0];
            int b=it[1];
            int c=it[2];
            adj[a].push_back({b,c});
        }
        priority_queue<vector<int> ,vector<vector<int>> ,greater<vector<int>>> pq;
        pq.push({0,0,src});
        vector<int> dist(n,1e9);
        dist[src]=0;
        while(!pq.empty())
        {
            int stop=pq.top()[0];
            int dis=pq.top()[1];
            int node=pq.top()[2];
            pq.pop();
            if(stop==k+1)
            break;
            for(auto it:adj[node])
            {
                int wt=it[1];
                int x=it[0];
                if(dist[x]>dis+wt)
                {
                    dist[x]=dis+wt;
                    pq.push({stop+1,dist[x],x});
                }
            }
        }
        if(dist[dst]==1e9)
        return -1;
        return dist[dst];

    }
};