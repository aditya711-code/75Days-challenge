class Solution {
public:
    int lis(vector<int>&nums,int i,int prev,vector<int>&v)
    {
        if(i>=nums.size())return 0;
        if(v[i]!=-1)
            return v[i];
        int take=0;
        int donttake=lis(nums,i+1,prev,v);
        if(nums[i]>prev)take=1+lis(nums,i+1,nums[i],v);
        v[i]=max(take,donttake);
        return max(take,donttake);
        
    }
    int lengthOfLIS(vector<int>& arr) {
        int n=arr.size();
         int *output=new int[n];
    output[0]=1;
    for(int i=0;i<n;i++)
    {
        output[i]=1;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>=arr[i])continue;
            int ans=output[j]+1;
            if(ans>output[i])
            {
                output[i]=ans;
            }
        }
    }
    int maxlen=0;
    for(int i=0;i<n;i++)
    {
        if(maxlen<output[i])
        {
            maxlen=output[i];
        }
    }
    delete []output;

    return maxlen;
    }
};
