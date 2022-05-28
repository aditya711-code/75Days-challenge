int isEularCircuit(int V, vector<int>adj[]){
	    // Code here
	    int odd=0;
	    for(int i=0;i<V;i++)
	    {
	        if(adj[i].size()%2!=0)
	            odd++;
	           
	    }
	    if(odd==2)
	        return 1;
	   else if(odd==0)return 2;
	   return 0;
	}
