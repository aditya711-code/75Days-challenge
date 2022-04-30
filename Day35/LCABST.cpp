class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      
        // TreeNode* cur=root;
        // while(cur->val!=p->val && cur->val!=q->val)
        // {
        //     if((p->val<cur->val && q->val>cur->val)||(p->val>cur->val && q->val<cur->val))
        //         break;
        //     if(p->val<cur->val && q->val<cur->val)
        //         root=root->left;
        //     else
        //         root=root->right;
        // }
        // return cur;
         TreeNode* current  = root;
        while(p->val != current->val && q->val != current->val){
            if((p->val < current->val && q->val > current->val) || (p->val > current->val && q->val <                       current->val)) break;
                if(p->val < current->val && q->val < current->val)
                current = current->left;
            else
                current = current->right;
        }
        return current;
      
        
    }
};
