 
/*REVIST THIS PROBLEM*/
void nextPermutation(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        for(k=n-2;k>=0;k--)
        {
            if(nums[k]<nums[k+1])
            {
                break;
                
            }
            
        }
        int l=0;
        if(k<0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        else
        {
            for( l=n-1;l>k;l--)
            {
                if(nums[l]>nums[k])
                {
                    break;
                }
            }
            
        }
        swap(nums[l],nums[k]);
        reverse(nums.begin()+k+1,nums.end());
        
    }
