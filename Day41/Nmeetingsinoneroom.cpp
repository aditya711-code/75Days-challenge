int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        sort(start,start+n);
        sort(end,end+n);
       	int i=1,j=0;
    	int platform=1,ans=1;
    	while(i<n && j<n)
    	{
    	    if(start[i]<=end[j])
    	    {
    	       
    	        platform++;
    	         i++;
    	    }
    	    else if(start[i]>end[j])
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
