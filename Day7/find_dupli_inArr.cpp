int findDuplicate(vector<int>& nums) {
      int dupliele=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
            {
                nums[nums[i]%n]=nums[nums[i]%n]+n;
            }
        for(int i=0;i<n;i++)
        {
            if(nums[i]/n>=2)
            {
                dupliele=i;
            }
        }
        return dupliele;
    }
