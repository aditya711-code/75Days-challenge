class Solution {
public:
     void help(int index,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds)
    {
        if(index==arr.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(arr[index]<=target)
        {
            ds.push_back(arr[index]);
            help(index,target-arr[index],arr,ans,ds);
            ds.pop_back();
        }
        help(index+1,target,arr,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        help(0,target,candidates,ans,ds);
       // cout<<ans.size();
        
        return ans;
    }
        
};
