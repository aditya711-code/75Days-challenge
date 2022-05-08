class Solution {
public:
    void fill(vector<int>&ds,vector<vector<int>>&ans,int left,int n,int k)
    {
        if(k==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=left;i<=n;i++)
        {
            ds.push_back(i);
            fill(ds,ans,i+1,n,k-1);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
       vector<int>ds;
        vector<vector<int>>ans;
        fill(ds,ans,1,n,k);
        return ans;
    }
};
