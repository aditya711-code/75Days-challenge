int subarraySum(vector<int>& nums, int k) {
       int n=nums.size();
        int count=0;
        int sum=0;
        unordered_map<int,int>map={{0,1}};
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int delta=sum-k;
            
            if(map.find(delta)!=map.end())
            {
                count+=map[delta];
            }
            
             map[sum]++;
           
            
        
        }
        return count;
    }
