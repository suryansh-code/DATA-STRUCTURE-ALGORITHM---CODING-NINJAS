#include<cmath>
#include<climits>

bool isBST3(BinaryTreeNode<int>* root,int min=INT_MIN,int max=INT_MAX)
{
    if(root==NULL)
    {
        return true;
    }

    bool left_ok = isBST3(root->left,min,root->data-1);
    bool right_ok = isBST3(root->right,root->data,max);

    if(left_ok == true && right_ok == true)
    {
        return true;
    }

}