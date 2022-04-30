class Solution {
public:
    TreeNode* construct_tree(vector<int>&preorder,vector<int>&postorder,int spre,int spost,int preL,int postL)
    {
        if(spre>preL||spost>postL||preL>preorder.size())return NULL;
        int val=preorder[spre];
        TreeNode* root=new TreeNode(val);
        if(spre==preL)return root;
        int x=preorder[spre+1];
        int index;
        for(int i=spost;i<postL;i++)
        {
            if(postorder[i]==x)
            {
                index=i;
                break;
            }
            
        }
        int lpres=spre+1;
        int lpre=lpres+index-spost;
        int rpres=lpre+1;
        int rpre=preL;
        int lposts=spost;
        int lposte=index;
        int rposts=lposte+1;
        int rposte=postL-1;
        root->left=construct_tree(preorder,postorder,lpres,lposts,lpre,lposte);
        root->right=construct_tree(preorder,postorder,rpres,rposts,rpre,rposte);
        
        return root;
        
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int preL=preorder.size();
        int postL=postorder.size();
        TreeNode* root =construct_tree(preorder,postorder,0,0,preL-1,postL-1);
        return root;
        
    }
};
