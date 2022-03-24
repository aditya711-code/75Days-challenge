  vector<int> twoSum(vector<int>& nums, int target) {
        int sum;
        vector<int>idx;
        int n=nums.size();
    //Brute Force
        /*for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
            if(i!=j){
              sum=nums[i]+nums[j];
            
            if(target==sum){
                idx.push_back(i);
                idx.push_back(j);
            }
            }
            }
            
        }*/
    //Optimal Solution with TC=O(N)
    //SC=O(N)
         map<int,int>res_hash;
        vector <int> result;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(res_hash.find(target-nums[i])!=res_hash.end())
            {
                
                result.push_back(res_hash[target-nums[i]]);
                result.push_back(i);
                return result;
            }
            else
                res_hash[nums[i]] = i;
        }
        return result;
        
    }
   
