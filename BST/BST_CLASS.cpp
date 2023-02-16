class BST
{
    BinaryTreeNode<int>* root;

    public:

    BST()
    {
        root=NULL;
    }

    ~BST()
    {
        delete root;
    }

    private:
    bool hasData(int data,BinaryTreeNode<int>* node )
    {
        if(node == NULL)
        {
            return false;
        }
        if(root->data==data)
        {
            return true;
        }
        else if(data<node->data)
        {
            return hasData(data,node->left);
        }
        else
        {
            return hasData(data,node->right)
        }
    }


    public:
    bool hasData(int data)
    {
        return hasData(data,root);
    }
}