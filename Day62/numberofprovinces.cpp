class Solution {
public:
    void dfs(int source,vector<vector<int>>&edge,vector<bool>&visited)
    {
        visited[source]=true;
        for(int i=0;i<edge.size();i++)
        {
            if(!visited[i] && edge[source][i]==1)
            {
                dfs(i,edge,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
        int n=isConnected.size();
        vector<bool>visited(n,false);
        for(int i=0;i<isConnected.size();i++)
        {
           if(visited[i]==false)
           {
               dfs(i,isConnected,visited);
               count++;
           }
        }
        return count;
    }
};
