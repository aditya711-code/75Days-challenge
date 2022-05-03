  static bool comp(Job job1,Job job2)
    {
        return job1.profit>job2.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comp);
        vector<int>ans;
        int maxdead=0;
        for(int i=0;i<n;i++)
        {
            maxdead=max(maxdead,arr[i].dead);
        }
        vector<int>profits(maxdead+1,-1);
        int maxprofit=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i].dead;j>0;j--)
            {
                if(profits[j]==-1)
                {
                    profits[j]=i;
                    maxprofit+=arr[i].profit;
                    count++;
                    break;
                }
            }
            
        }
        // cout<<profits.size()<<endl;
        // for(auto i:profits)
        // {
        //     cout<<i<<" ";
        // }
        
        
        ans.push_back(count);
        ans.push_back(maxprofit);
        return ans;
    } 
