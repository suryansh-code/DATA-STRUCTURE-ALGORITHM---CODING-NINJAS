//count nodes binary tree

int count_nodes(BinarytreeNodes<int>* root)
{
    if(root==NULL)
    {
        return 0;
    }

    return 1+count_nodes(root->left) + count_nodes(root->right);
}