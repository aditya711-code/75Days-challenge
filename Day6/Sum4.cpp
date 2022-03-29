 vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //two pointers
        //AS CONSTRAINTS ARE BIGGER U NEED TO MINUS NUMS[I]+NUMS[J]FROM TARGET
        //COMPARE THEIR RESULT WITH RESULT WE GOT FROM TWO POINTERS
    //AND DONT FORGET TO USE SET IT HELPS TO ELEMMINATE THE DUPLICATES
   int n=nums.size();
        if(n<4)
            return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>>output;
        set<vector<int>>s;//to eliminate duplicate elements
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int sum1=target-nums[i]-nums[j];
                int x=j+1;
                int y=n-1;
                while(x<y)
                {
                    int sum=nums[x]+nums[y];

                     if(sum<sum1)
                    {
                        x++;
                    }
                    else if(sum>sum1)
                    {
                        y--;
                    }
                    else
                    {
                            vector<int>v={nums[i],nums[j],nums[x],nums[y]};                                   
                            s.insert(v); 
                        x++;
                        y--;
                    }
                }       
                          
                }
            }
        
            for(auto i:s)
            { 
                output.push_back(i);
            }
        return output;
        
    }
