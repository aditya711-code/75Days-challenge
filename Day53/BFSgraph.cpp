vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        
        // Code here
        vector<int>ans;
        vector<bool>visited(v,false);
        queue<int>q;
        
        q.push(0);
        visited[0]=true;
        while(!q.empty())
        {
            int v=q.front();
            q.pop();
            visited[v]=true;
            ans.push_back(v);
            for(int i=0;i<adj[v].size();i++)
            {
                int neigh=adj[v][i];
                if(!visited[neigh])
                {
                    visited[neigh]=true;
                    q.push(neigh);
                }
            }
        }
        return ans;
    }
