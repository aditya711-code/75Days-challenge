class Solution {
public:
    vector<TreeNode*>helper(int si,int n)
    {
        if(si>n)
        {
            vector<TreeNode*>v;
            v.push_back(NULL);
            return v;
        }
        vector<TreeNode*>ans;
        for(int i=si;i<=n;i++)
        {
            vector<TreeNode*>left=helper(si,i-1);
            vector<TreeNode*>right=helper(i+1,n);
            for(auto l:left)
            {
                for(auto r :right)
                {
                    TreeNode* root=new TreeNode(i);
                    root->left=l;
                    root->right=r;
                    ans.push_back(root);
                }
            }
            
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return helper(1,n);
        
    }
};
