Node *deleteNode(Node *root, int key) {
    // your code goes here
     if(root==NULL)return NULL;
    if(key<root->data)
    {
        root->left=deleteNode(root->left,key);
        
    }
    else if(key>root->data)
    {
        root->right=deleteNode(root->right,key);
       
    }
    else if(root->data==key)
    {
        //leaf node
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
            //with one right child;
        else if(root->left==NULL)
        {
            Node* temp=root->right;
            root->right=NULL;
            
            return temp;
        }
            //with one left child
        else if(root->right==NULL)
        {
            Node* temp=root->left;
            root->left=NULL;
            return temp;
        }
        else
        {
             Node* minNode=root->right;
            while(minNode->left!=NULL)
            {
                minNode=minNode->left;
            }
            int rightmin=minNode->data;
            root->data=rightmin;
           
            root->right=deleteNode(root->right,rightmin);
            
        }
        return root;
    }
    
}
