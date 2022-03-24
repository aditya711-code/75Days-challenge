 void moveZeroes(vector<int>& arr) {
       
        int n=arr.size();
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                arr[x++]=arr[i];
            }
            
        }
        for(int i=x;i<n;i++)
        {
            arr[i]=0;
        }
        return;
        
    }
