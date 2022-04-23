class Solution {
public:
       int solve(TreeNode* root, int maxVal)
    {
        if(!root) return 0;

        int goodNode = 0;
        if(root->val >= maxVal)
        {
            maxVal = root->val;
            goodNode++;
        }

        return goodNode + solve(root->left, maxVal) + solve(root->right, maxVal);
    }

    int goodNodes(TreeNode* root) {

        if(!root) return 0;
        return solve(root, root->val);
    }
};
