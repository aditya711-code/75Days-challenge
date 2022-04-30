class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        queue<pair<TreeNode*,long long int>>q;
        q.push({root,0});
      
        int result=0;
        while(!q.empty())
        {
            int size=q.size();
            int first,last;
            long long int mmin=q.front().second;//to make id startig from zero
            for(int i=0;i<size;i++)
            {
                long long int cur_id=q.front().second-mmin;
                TreeNode* cur=q.front().first;
                q.pop();
                if(i==0)first=cur_id;
                if(i==size-1)last=cur_id;
                if(cur->left!=NULL)
                {
                    q.push({cur->left,2*cur_id+1});
                }
                if(cur->right!=NULL)
                {
                    q.push({cur->right,2*cur_id+2});
                }
            }
            result=max(result,last-first+1);
                
            
            
        }
        return result;
    }
};
