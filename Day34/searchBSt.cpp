bool search(struct Node* root, int k) {
    
    bool ans=false;
    if(root==NULL)
        return false;
    if(root->data==k)
    {
        ans=true;
        return true;
    }
    if(k<root->data)
    {
    	ans=search(root->left,k);
    }
    if(k>root->data)
    {
        ans=search(root->right,k);
    }
    if(ans)
    {
        ans=true;
        return true;
    }
    
    return ans;
}
