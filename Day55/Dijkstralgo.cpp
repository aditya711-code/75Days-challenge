vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        int n=V;
        vector<bool>visited(n,false);
        vector<int>distance(n,INT_MAX);
        distance[S]=0;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,S});
       for(int i=0;i<n;i++)
        {
            int minvertex=pq.top().second;
            pq.pop();
            for(auto i:adj[minvertex])
            {
                int j=i[0];
                int w=i[1];
                
                
                    int d=distance[minvertex]+w;
                    if(d<distance[j])
                    {
                        distance[j]=d;
                        pq.push({d,j});
                    }
                
            }
        }
        return distance;
    }
