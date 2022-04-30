class Solution {
    private:
    int diff=INT_MAX;
    TreeNode* prev=NULL;
public:
    void getDiff(TreeNode*root)
    {
        if(root==NULL)return ;
        if(root->left)getDiff(root->left);
        if(prev)diff=min(abs(prev->val-root->val),diff);
        prev=root;
        if(root->right)getDiff(root->right);
        
    }
    int getMinimumDifference(TreeNode* root) {
        getDiff(root);
        return diff;
    }
};
