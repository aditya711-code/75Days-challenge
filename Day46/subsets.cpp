class Solution {
public:
    void sub(int index,vector<int>&nums,vector<int>res,vector<vector<int>>&output)
    {
       if(index==nums.size())
       {
           output.push_back(res);
           return;
       }
        sub(index+1,nums,res,output);
        res.push_back(nums[index]);
        sub(index+1,nums,res,output);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>output;
        vector<int>res;
        sub(0,nums,res,output);
        return output;
        
    }
};
