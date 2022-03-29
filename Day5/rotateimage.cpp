 void transpose(vector<vector<int>>&matrix)
    {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
    }
    void reverse(vector<vector<int>>&matrix)
    {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][n-j-1];
                matrix[i][n-j-1]=temp;
                
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
       //TO remember
        //1.Transpose of matrix
        //2.Reversal of the every row in matrix;
        int n=matrix.size();
        int n1=matrix[0].size();
        transpose(matrix);
        reverse(matrix);
       
        
        
    }
