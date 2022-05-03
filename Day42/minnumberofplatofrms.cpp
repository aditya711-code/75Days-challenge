int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i=1,j=0;
    	int platform=1,ans=1;
    	while(i<n && j<n)
    	{
    	    if(arr[i]<=dep[j])
    	    {
    	       cout<<i<<" "<<j<<endl;
    	        platform++;
    	         i++;
    	    }
    	    else if(arr[i]>dep[j])
    	    {
    	        
    	        platform--;
    	        j++;
    	    }
    	    if(platform>ans)
    	    {
    	        ans=platform;
    	    }
    	}
    	return ans;
    }
