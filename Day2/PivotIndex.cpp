  int pivotIndex(vector<int>& nums) {
    //Prefix Sum method
        
     int sum=0; 
        for(auto i:nums)
        {
            sum+=i;
        }
        int leftsum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(leftsum==sum-leftsum- nums[i])return i;
            leftsum+=nums[i];
        }
        return -1;
    }
