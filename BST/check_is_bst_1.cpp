#include<cmath>
#include<climits>


int maximum(BinaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        return INT_MIN;
    }

    return max(root->data,max(maximum(root->left),maximum(root->right)));
}

int minimum(BinaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        return INT_MAX;
    }

    return min(root->data,max(minimum(root->left),minimum(root->right)));
}

bool isBst(BinaryTreeNode<int> * root)
{
    if(root==NULL)
    {
        return true;
    }

    int leftmax=maximum(root->left);
    int rightmin=minimum(root->right);
    bool output=(root->data > leftmax) && (root->data <= rightmin) && isBst(root->left) && isBst(root->right);
    return output;
}