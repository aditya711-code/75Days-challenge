int majorityElement(vector<int>& nums) {
  //Boyer Moore voting Algorithm
     int result=nums[0],count=0;
        for(auto it:nums)
        {
            if(it==result)
                count++;
            else
            {
                if(count==0)
                {
                    result=it;
                    count++;
                }
                else
                    count--;
            }
        }
        return result;
    }
