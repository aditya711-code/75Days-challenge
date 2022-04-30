class Solution {
public:
    void fill(vector<int>&v,TreeNode*root)
    {
        if(root==NULL)return;
        fill(v,root->left);
        v.push_back(root->val);
        fill(v,root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)return true;
        vector<int>v;
        fill(v,root);
        
        vector<int>sorted=v;
        sort(sorted.begin(),sorted.end());
        for(int i = 0; i<sorted.size(); i++)
        {
            int l = sorted[i];
            int b=count(sorted.begin(),sorted.end(),l);
            if(sorted[i]==v[i] && b<=1) continue;
            else return false;
        }
        
        return true;
    }
};
