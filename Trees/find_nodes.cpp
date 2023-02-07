//binary tree

bool isNodePresent(BinaryTreeNode<int>* root, int x) {

    bool ans=false;
    
   if(root==NULL)
   {
       return false;
   }
  if(root->data==x)
       ans =true;
    
   if(root->left) 
   {  bool leftans= isNodePresent(root->left,x);
      if(leftans)
          ans=leftans;
   }
    
    if(root->right)
    {   bool rightans= isNodePresent(root->right,x); 
      if(rightans)
          ans=rightans;
    }
   return ans; 

}