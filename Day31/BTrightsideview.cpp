class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        TreeNode* front;
        while(!q.empty())
        {
            if(q.front()!=NULL)
            {
                front=q.front();
                 if(front->right)q.push(front->right);
                if(front->left)q.push(front->left);
                q.pop();
            }
            else if(q.front()==NULL)
            {
                ans.push_back(front->val);
                q.pop();
               if(!q.empty())q.push(NULL);
                
            }
        }
        return ans;
        
    }
};
