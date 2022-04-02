 int findPairs(vector<int>& nums, int k) {
       int count=0;
        sort(nums.begin(),nums.end());
        int slow=0;
        int fast=1;
        int n=nums.size();
        while(slow<n && fast<n)
        {
            if(nums[fast]-nums[slow]==k)
            {
                count++;
                fast++;
                slow++;
                while(fast<n && nums[fast]==nums[fast-1])
                {
                    fast++;
                }
            }
            else if(nums[fast]-nums[slow]>k)
            {
                slow++;
                if(fast-slow==0)
                    fast++;
                
            }
            else
                fast++;
            
        }
        return count;
        
    }
