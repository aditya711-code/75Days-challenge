 int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>map;
        int n=time.size();
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            int rem=time[i]%60;
            if(rem==0)
            {
                count+=map[rem];
            }
            else
            {
                count+=map[60-rem];
            }
            map[rem]++;
          
        }
        return count;
        
    }
