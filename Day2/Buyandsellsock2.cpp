int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int profit=INT_MIN;
        int ans=0;
        if(prices.size()==1)
            return 0;
        for(int i=0;i<prices.size()-1;i++)
        {
            buy=prices[i];
            profit=prices[i+1]-buy;
            if(profit>0)
            {
                ans+=profit;
            }
           
        }
        
        return ans;
    }
