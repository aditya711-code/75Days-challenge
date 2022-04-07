  int atmostk(vector<int>&nums,int k)
    {
        int res=0;
        int i=0;
        unordered_map<int,int>map;
        for(int j=0;j<nums.size();j++)
        {
            if(!map[nums[j]]++)k--;
            while(k<0)
            {
                if(!--map[nums[i]])k++;
                i++;
                
            }
            res+=j-i+1;
        }
        return res;
       
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       
         return (atmostk(nums,k)-atmostk(nums,k-1));
    }
