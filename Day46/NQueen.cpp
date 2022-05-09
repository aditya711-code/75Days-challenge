bool isPossible(vector<vector<int>>&board,int row,int col,int n)
{
    //upper left diagonal
    for(int i=row-1,j=col-1;i>=0 && j>=0; i--,j--)
    {
        if(board[i][j]>=1)
        {
            return false;
        }
    }
    //upper right diagonal
    for(int i=row-1,j=col+1;i>=0 && j<n; i--,j++)
    {
         if(board[i][j]>=1)
        {
            return false;
        }
    }
    //down left diagonal
    for(int i=row+1,j=col-1;i<n && j>=0 ;i++,j--)
    {
        if(board[i][j]>=1)
            return false;
        
    }
    //down right diagonal
    for(int i=row+1,j=col+1; i<n && j<n ;i++,j++)
    {
        if(board[i][j]>=1)
            return false;
    }
     // up;
    for (int i = row - 1; i >= 0; i--)
    {
        if (board[i][col] >= 1)
            return false;
    }
    // down
    for (int i = row + 1; i < n; i++)
    {
        if (board[i][col] >= 1)
            return false;
    }
}
    void help( vector<vector<int>>&board,int row,int n, vector<vector<int>>&ans,vector<int>ds)
    {
        if(row==n)
        {
            ans.push_back(ds);
            return;
        }
        for(int j=0;j<n;j++)
        {
            if(isPossible(board,row,j,n))
            {
                ds.push_back(j+1);
                board[row][j]=j+1;
                help(board,row+1,n,ans,ds);
                board[row][j]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>board(n,vector<int>(n,0));
        vector<vector<int>>ans;
        vector<int>ds;
        
        help(board,0,n,ans,ds);
        return ans;
    }
