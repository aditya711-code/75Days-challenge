	
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int>weight(V,INT_MAX);
        vector<int>visited(V,false);
        vector<int>parent(V,-1);
        weight[0]=0;
        parent[0]=-1;
        typedef pair<int,int>pi;
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        pq.push({0,0});
        int sum=0;
         while(!pq.empty()) {
            int node = pq.top().second;
            visited[node] = 1;
            pq.pop();
            for(auto& it: adj[node]) {
                if(visited[it[0]]==false && weight[it[0]]>it[1]) {
                    parent[it[0]] = node;
                    weight[it[0]] = it[1];
                    pq.push({it[1], it[0]});
                }
            }
        }
         sum= accumulate(weight.begin(), weight.end(), 0);
        return sum;
    }
