//in that article problem was something else
//drive the car
long long required(long long arr[], long long n, long long k) {
        // Your code goes here
        long long ans=1;
        for(long long i=0;i<n;i++)
        {
            long long  diff=k-arr[i];
           
            if(diff<0)
            {
               
                ans=min(ans,diff);
            }
        }
        return ans*-1;
    }
