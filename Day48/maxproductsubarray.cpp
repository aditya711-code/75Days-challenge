class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int res=*max_element(nums.begin(),nums.end());
        int curMax=1,curMin=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                curMax=1,curMin=1;
                continue;
            }
            int temp=curMax*nums[i];
            curMax=max(max(curMax*nums[i],curMin*nums[i]),nums[i]);
            curMin=min(min(temp,curMin*nums[i]),nums[i]);
            res=max(res,curMax);
           
        }
        return res;
        
    }
};
