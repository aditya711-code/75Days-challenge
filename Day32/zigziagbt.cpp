 vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)return {};
        vector<vector<int>>result;
        bool left_right=true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int>row(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                int index=(left_right)?i:size-1-i;
                row[index]=node->val;
                if(node->left)
                {
                    q.push(node->left);
                    
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            }
            result.push_back(row);
            left_right=!left_right;
        }
        return result;
    }
