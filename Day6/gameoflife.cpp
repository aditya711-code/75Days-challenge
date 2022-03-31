 int curlife(vector<vector<int>>&board,int i,int j,int m,int n)
    {
        //travel in 8 directions;
        int life=0;
        //upper
        if(i>0 && (board[i-1][j]==1 || board[i-1][j]==3))life++;
        //lower
        if(i<m-1 && (board[i+1][j]==1 || board[i+1][j]==3))life++;
        //left
        if(j>0 && (board[i][j-1]==1 || board[i][j-1]==3))life++;
        //right
        if(j<n-1 && (board[i][j+1]==1 || board[i][j+1]==3))life++;
        if(i>0 && j>0 && (board[i-1][j-1] == 1 || board[i-1][j-1]==3)) life++;

        if(i>0 && j<n-1 && (board[i-1][j+1] == 1 || board[i-1][j+1]==3))life++;

        if(i<m-1 && j>0 && (board[i+1][j-1] == 1 || board[i+1][j-1]==3)) life++;

        if(i<m-1 && j<n-1 && (board[i+1][j+1] == 1 || board[i+1][j+1]==3)) life++;
	
        return life;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int life=curlife(board,i,j,m,n);
                if(board[i][j]==0)
                {
                    //born new life
                    if(life==3)
                    {
                        board[i][j]=2;
                    }
                }
                else if(board[i][j]==1)
                {
                    //die due to underand overpopulation
                    if(life<2 || life>3)
                    {
                        board[i][j]=3;
                    }
                }
            }
        }
        for(int i = 0; i<m; i++) 
        {
            for(int j = 0; j<n; j++)
            {
                if(board[i][j] == 2) board[i][j] = 1;
                else if(board[i][j] == 3) board[i][j] = 0;
            }
	    }

        
        
    }
