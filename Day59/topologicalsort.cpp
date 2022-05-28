void dfs(int node,vector<int> adj[],stack<int>&st,vector<int>&visited)
	{
	    visited[node]=1;
	    for(auto it:adj[node])
	    {
	        if(!visited[it])
	        {
	            dfs(it,adj,st,visited);
	        }
	    }
	    st.push(node);
	    
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>ans;
	    stack<int>st;
	    vector<int>visited(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i])
	            dfs(i,adj,st,visited);
	    }
	    while(!st.empty())
	    {
	        ans.push_back(st.top());
	        st.pop();
	    }
	   
	    return ans;
	}
