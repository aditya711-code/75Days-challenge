void DFSRec(vector<int> adj[],int s,bool visited[],vector<int> &vc){
       visited[s] = true;
       vc.push_back(s);
       for(int u : adj[s]){
           if(visited[u] == false){
               DFSRec(adj,u,visited,vc);
           }
       }
   }
   vector<int> dfsOfGraph(int V, vector<int> adj[]) {
       // Code here
       bool visited[V];
       for(int i = 0;i<V;i++){
           visited[i] = false;
       }
       vector<int> vc;
       DFSRec(adj,0,visited,vc);
       return vc;
   }
