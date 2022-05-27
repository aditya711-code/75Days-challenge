 int findParent(int node,int parent[])
    {
        if(node==parent[node])
            return node;
        return parent[node]=findParent(parent[node],parent);
    }
    void union_( int a, int b, int parent[], int rank1[]) 
    {
        //code here
        a=findParent(a,parent);
        b=findParent(b,parent);
        if(rank1[a]<rank1[b])
        {
            parent[a]=b;
            
        }
        else if(rank1[b]<rank1[a])
        {
            parent[b]=a;
        }
        else
        {
            parent[a]=b;
            rank1[b]++;
        }
       
    }
    
    //Function to check whether 2 nodes are connected or not.
    bool isConnected(int x,int y, int par[], int rank1[])
    {
        //code here
      if(findParent(x,par)==findParent(y,par))
        return true;
    
    return false;
    }
