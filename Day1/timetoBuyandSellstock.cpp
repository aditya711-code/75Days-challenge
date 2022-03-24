int maxProfit(vector<int>& price) {
       
        
        int buy=INT_MAX;
        int ans=0;
        int n=price.size();
        for(int i=0;i<n;i++)
        {
            
            buy=min(buy,price[i]);
            ans=max(ans,price[i]-buy);
            
        }
        return ans;
        
    }
