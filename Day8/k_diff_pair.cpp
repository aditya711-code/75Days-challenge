 int findPairs(vector<int>& nums, int k) {
       int count=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            
        }
        for(auto i:m)
        {
            if(k==0)
            {
                if(i.second>1)
                    count++;
            }
            else if(m.find(k+i.first)!=m.end())
            {
                count++;
            }
        }
        return count;
        
    }
