void sortColors(vector<int>& nums) {
       int lo=0;//low for the zero
        int mid=0;//mid for the one
        int high=nums.size()-1;//red for two;
        while(mid<=high)
        {
            if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==0)
            {
                int temp=nums[lo];
                nums[lo]=nums[mid];
                nums[mid]=temp;
                lo++;
                mid++;
            
            }
            else if(nums[mid]==2)
            {
                int temp=nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                high--;
            }
            
        }
       
        
    }
