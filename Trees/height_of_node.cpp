//binary tree

int height(BinaryTreeNode<int> *root) {
    int h=0;
    if(root==NULL)
        return h;
    
    int lefth= height(root->left);
    int righth= height(root->right);
    
   if(lefth>righth)
       return lefth +1;
    else
        return righth+1;

}