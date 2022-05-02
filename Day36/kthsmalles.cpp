class Solution {
public:
    void inorder(TreeNode* root,int &kth,int k,int &ans)
    {
        if(root==NULL)return;
        inorder(root->left,kth,k,ans);
        kth++;
        if(kth==k)
        {
            ans=root->val;
            return ;
        }
        inorder(root->right,kth,k ,ans);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans=-1;
        int kth=0;
         inorder(root,kth,k,ans);
        return ans;
    }
};
