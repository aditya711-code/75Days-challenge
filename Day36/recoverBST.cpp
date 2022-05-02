class Solution {
    private:
    TreeNode* first;
    TreeNode* mid;
    TreeNode* last;
    TreeNode* prev;
    private:
    void inorder(TreeNode* root)
    {
        if(root==NULL)return;
        inorder(root->left);
        if(prev!=NULL &&(root->val<prev->val))
        {
            
            if(first==NULL)
            {
                first=prev;
                mid=root;
            }
            else
            {
                last=root;
            }
        }
        prev=root;
        inorder(root->right);
    }
public:
   
    void recoverTree(TreeNode* root) {
       first=mid=last=NULL;
        prev=new TreeNode(INT_MIN);
        inorder(root);
        if(first && last)
        {
            swap(first->val ,last->val);
        }
        else if(first && mid)
        {
            swap(first->val ,mid->val);
        }
    }
};
