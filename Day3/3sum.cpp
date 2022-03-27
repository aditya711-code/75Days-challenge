 vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<=2)
        {
            return {};
        }
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
       for(int i=0;i<n-2;i++)
       {
          if(nums[i]>0)break;
           if(i>0 &&nums[i]==nums[i-1])continue;
           int j=i+1;
           int k=n-1;
           while(j<k)
           {
               if(nums[i]+nums[j]+nums[k]>0)
               {
                   k--;
               }
               else if(nums[i]+nums[j]+nums[k]<0)
               {
                   j++;
               }
               else
               {
                   ans.push_back({nums[i],nums[j],nums[k]});
                   int low_occ=nums[j];
                   int high_occ=nums[k];
                   while(j<k && nums[j]==low_occ)
                   {
                       j++;
                   }
                   while(j<k && nums[k]==high_occ)
                   {
                       k--;
                   }
                   
               }
           }
       }
        return ans;
    }
