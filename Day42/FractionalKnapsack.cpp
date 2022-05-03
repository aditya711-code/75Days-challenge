    bool static comparator(Item a,Item b)
    {
        double r1=(double)a.value/(double)a.weight;
        double r2=(double)b.value/(double)b.weight;
        return r1>r2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
     
    
        // Your code here
        sort(arr,arr+n,comparator);
        int maxw=0;
        double maxvalue=0.0;
        for(int i=0;i<n;i++)
        {
            if(maxw+arr[i].weight<=W)
            {
                maxvalue+=arr[i].value;
                maxw+=arr[i].weight;
            }
            else
            {
                int remain=W-maxw;
                maxvalue+=(arr[i].value/(double)arr[i].weight)*((double)remain);
                break;
            }
        }
        return maxvalue;
    }
        
