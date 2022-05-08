class Solution {
public:
   void permute(vector<int>&nums,unordered_map<int,bool>&m,vector<int>&ds,vector<vector<int>>&ans)
   {
       if(ds.size()==nums.size())
       {
           ans.push_back(ds);
       }
       for(int i=0;i<nums.size();i++)
       {
          if(m[nums[i]]==1)
              continue;
           else
           {
               m[nums[i]]=true;
               ds.push_back(nums[i]);
           }
           
           permute(nums,m,ds,ans);
           
           m[nums[i]]=false;
           ds.pop_back();
           
       }
       
   }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<int>ds;
        vector<vector<int>>ans;
        unordered_map<int,bool>m;
      
            permute(nums,m,ds,ans);
          return ans;
    }
    
    
};
