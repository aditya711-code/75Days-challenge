class Solution {
public:
    int sum=0;
    void add(TreeNode* root,int low,int high)
    {
        if(root==NULL)return;
        
         if(root->val>=low && root->val<=high)
        {
            sum+=root->val;
            
        }
        if(root->val>low)
        {
            add(root->left,low,high);
        }
        if(root->val<high)
        {
            add(root->right,low,high);
        }
        return;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)return 0;
        add(root,low,high);
        return sum;
    }
};
