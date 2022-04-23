class Solution {
public:
    void suml(TreeNode* root,int &sum,bool ans)
    {
        if(root==NULL)
        {
            return ;
        }
        if(root->left==NULL && root->right==NULL && ans==true)
        {

            
            sum+=root->val;
                        

        }
        suml(root->left,sum,true);
        suml(root->right,sum,false);
        return ;
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)
            return 0;
        int sum=0;

        suml(root,sum,false);
       

        
        return sum;
    }
};
