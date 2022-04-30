class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
            return NULL;
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            Node* r1=q.front();
            q.pop();
            if(r1!=NULL)
            {
                    r1->next=q.front();
                  
            if(r1->left!=NULL)
            {
              
                q.push(r1->left);
            }
            if(r1->right!=NULL)
            {
                q.push(r1->right);
                
            }
            }
            else if(!q.empty())
            {
                q.push(NULL);
            }
            
        }
        return root;
        
        
        
    }
};
