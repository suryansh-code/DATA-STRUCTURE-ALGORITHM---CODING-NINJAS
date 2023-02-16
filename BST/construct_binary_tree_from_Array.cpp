BinaryTreeNode<int>* tree(int input[],int s ,int e)
{
    if(s>e)
        return NULL;
    int mid=(s+e)/2;
    
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(input[mid]);
    
    root->left=tree(input,s,mid-1);
    root->right=tree(input,mid+1,e);
    return root;
}
BinaryTreeNode<int>* constructTree(int *input, int n) {
   
    return tree(input,0,n-1);    
    
}