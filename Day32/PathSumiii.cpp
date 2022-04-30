class Solution {
public:
    void solve(TreeNode* root,int &count,vector<int>v,int target)
    {
        if(root==NULL)return;
        v.push_back(root->val);
        solve(root->left,count,v,target);
         solve(root->right,count,v,target);
        long long sum=0;
        int size=v.size();
        for(int i=size-1;i>=0;i--)
        {
            sum+=v[i];
            if(sum==target)count++;
        }
        v.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        int count=0;
        solve(root,count,v,targetSum);
        return count;
        
    }
};
