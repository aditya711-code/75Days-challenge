 vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
      
        for(int i=0;i<n;i++)
        {
            int cur=abs(nums[i]);
            if(nums[cur-1]<0)
            {
                ans.push_back(cur);
            }
           nums[cur-1]=nums[cur-1]*-1;
        }
        return ans;
    }
