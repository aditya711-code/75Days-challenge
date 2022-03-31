//extended version of 3sum   
int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=target;
        int diff=INT_MAX;
        int res=INT_MAX;
        
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
               
                if(sum<=target)
                {
                  diff=target-sum;
                    if(diff<res)
                    {
                        res=diff;
                        ans=sum;
                    }
                    j++;
                }
                else if(sum>target)
                {
                     diff=sum-target;
                    if(diff<res)
                    {
                        res=diff;
                        ans=sum;
                    }
                    k--;
                    
                }
                else
                {
                    j++;
                    k--;
                }
            }
        }
        return ans;
    }
