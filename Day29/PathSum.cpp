class Solution {
public:
    bool hasPath(TreeNode* root,int sum, int k)
    {
        if(root==NULL)
            return false;
        sum+=root->val;
        if(sum==k && root->left==NULL && root->right==NULL)
            return true;
        if(hasPath(root->left,sum,k)||hasPath(root->right,sum,k))
            return true;
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
      bool ans= hasPath(root,sum,targetSum);
        return ans;
          
        
    }
};
