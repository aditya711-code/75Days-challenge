class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)return {};
        vector<vector<int>>result;
        queue<TreeNode*>q;
        q.push(root);
       
        while(!q.empty())
        {
            int size=q.size();
            vector<int>row;
            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                row.push_back(node->val);
                
            }
            result.push_back(row);
        }
        return result;
        
    }
};
