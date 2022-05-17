int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    
	    // Code here
	    vector<int>dist(n,INT_MAX);
	    dist[0]=0;
	    for(int count=0;count<n-1;count++)
	    {
	        for(int j=0;j<edges.size();j++)
	        {
	            int src=edges[j][0];
	            int dest=edges[j][1];
	            int weight=edges[j][2];
	            if(dist[src]!=INT_MAX && dist[src]+weight<dist[dest])
	            {
	                dist[dest]=dist[src]+weight;
	            }
	        }
	        
	    }
	        for(int j=0;j<edges.size();j++)
	        {
	            int src=edges[j][0];
	            int dest=edges[j][1];
	            int weight=edges[j][2];
	            if(dist[src]!=INT_MAX && dist[src]+weight<dist[dest])
	            {
	                return 1;
	            }
	        }
	       return 0;
	}
