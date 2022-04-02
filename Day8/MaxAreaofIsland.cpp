class Solution {
public:
    bool isValid(int i,int j,int m,int n)
    {
       if(i>=0 && j>=0 && i<m && j<n)return true;
        return false;
    }
    void dfs(vector<vector<int>>&grid,int i,int j,int m,int n,vector<vector<int>>&visited,int&curArea )
    {
        visited[i][j]=1;
        if(isValid(i-1,j,m,n) && !visited[i-1][j] && grid[i-1][j]==1)
        {
            curArea++;
            dfs(grid,i-1,j,m,n,visited,curArea);
        }
         if(isValid(i,j+1,m,n) && !visited[i][j+1] && grid[i][j+1]==1)
        {
            curArea++;
            dfs(grid,i,j+1,m,n,visited,curArea);
        }
         if(isValid(i+1,j,m,n) && !visited[i+1][j] && grid[i+1][j]==1)
        {
            curArea++;
            dfs(grid,i+1,j,m,n,visited,curArea);
        }
         if(isValid(i,j-1,m,n) && !visited[i][j-1] && grid[i][j-1]==1)
        {
            curArea++;
            dfs(grid,i,j-1,m,n,visited,curArea);
        }
        
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int m=grid.size();
        int n=grid[0].size();
        int res=0;
       int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
       //done with both dfs and bfs using stack
        stack<pair<int,int>>st;
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1 && visited[i][j]!=1)
                {
                    int shape=0;
                    st.push({i,j});
                    visited[i][j]=1;
                    while(!st.empty())
                    {
                        pair<int,int> f=st.top();
                        st.pop();
                        int x=f.first,y=f.second;
                        shape++;
                        for(int i=0;i<4;i++)
                        {
                            int newx=x+dx[i];
                            int newy=y+dy[i];
                            if(newx>=0 && newy>=0 && newx<m && newy<n && grid[newx][newy]==1 && !visited[newx][newy])
                            {
                                st.push({newx ,newy});
                                    visited[newx][newy]=1;
                            }
                        }
                        
                    }
                     res=max(res,shape);
                }
               
            }
        }
        return res;
        
    }
};
