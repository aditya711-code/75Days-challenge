int binarysearch(vector<int>&grid)
    {
       
        int low=0;
        int high=grid.size()-1;
        int res=0;
        int n=grid.size();
        bool found=false;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(grid[mid]<0)
            {
               found=true;
                res=mid;
                high=mid-1;
            }
            else if(grid[mid]>=0)
            {
                low=mid+1;
            }
        }
        if(found==false)
            return 0;
        return n-res;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int m=grid.size();
        int n=grid[0].size();
        int r=m-1;
        int c=0;
        
        while(c<n && r>=0)
        {
            if(grid[r][c]<0)
            {
               
                count+=(n-c);
                r--;
            }
            else
            {
                c++;
            }
        }
        return count;
    }
