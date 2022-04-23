class Solution {
public:
   
    bool isBalanced(TreeNode* root) {
        bool check=true;
        dfsheight(root,check);
        return check;
    
       
    }
     int dfsheight(TreeNode* root,bool &check){
         if(root==NULL){
             return 0;
         }
         int l=dfsheight(root->left,check);
         int r=dfsheight(root->right,check);
         if(abs(l-r)>1)check=false;
    
        
       
        return max(l,r)+1;
    }
};
