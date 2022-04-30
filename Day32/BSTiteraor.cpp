class BSTIterator {
public:
    stack<TreeNode*>s;
    void inorder(TreeNode* root)
    {
        while(root!=NULL)
        {
            s.push(root);
            root=root->left;
        }
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        TreeNode* cur=s.top();
        s.pop();
        inorder(cur->right);
        return cur->val;
    }
    
    bool hasNext() {
        return !s.empty();
    }
};
