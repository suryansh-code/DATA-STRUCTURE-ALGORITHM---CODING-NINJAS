//binary tree


#include<iostream>
using namespace std;
#include<queue>


template <typename t>
class BinarytreeNode{
    public:
    t data;
 
    BinarytreeNode *left;
    BinarytreeNode *right;
    
    BinarytreeNode(t data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }

    ~BinarytreeNode()
    {
        delete left;
        delete right;
    }


};

void printTree(BinarytreeNode<int> *root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<":";
    
    if(root->left!=NULL)
    {
        cout<<"L"<<root->left->data;
    }
    
    if(root->right!=NULL)
    {
        cout<<"R"<<root->right->data;
    }
 
    cout<<endl;
    printTree(root->left);
    printTree(root->right);


}

BinarytreeNode<int> *takeinput()
{
    int rootdata;
    cout<<"enter data"<<endl;
    cin>>rootdata;

    if(root==NULL)
    {
        return;
    }

    BinarytreeNode<int>* root= new BinarytreeNode<int>(rootdata);
    BinarytreeNode<int>* leftchild=takeinput();
    BinarytreeNode<int>* rightchild=takeinput();

    root->left=leftchild;
    root->right=rightchild;
    return root;
}

//lvl wise take inpuit
#include<queue>
BinarytreeNode<int> *takeinputlvl()
{
    int rootdata;
    if(root==-1)
    {
        return;
    }

    cout<<"enter rot data"<<endl;
    cin>>rootdata;

    queue<BinarytreeNode<int>*> pending_nodes;
    pending_nodes.push(root);

    BinarytreeNode<int> * front=pending_nodes.front();
    front.pop();

    cout<<"enter left child of "<<front->data<<endl;
    int leftchilddata;
    cin>>leftchilddata;

    if(leftchilddata != -1)
    {
        BinarytreeNode<int>* child = new BinarytreeNode<int>(leftchilddata);
        front->left=child;
        pending_nodes.push(child);
    }

    cout<<"enter right child of "<<front->data<<endl;
    int rightchilddata;
    cin>>rightchilddata;

    if(rightchilddata != -1)
    {
        BinarytreeNode<int>* child = new BinarytreeNode<int>(rightchilddata);
        front->right=child;
        pending_nodes.push(child);
    }

return root;
}

void printlvlwise(BinarytreeNode<int> * root)
{
     if(root==NULL)
     {
        return;
     }

    queue <BinarytreeNode<int> *> pending_nodes;
    pending_nodes.push(root);
    
    while(!pending_nodes.empty())
    {
        BinarytreeNode<int>* front=pending_nodes.front();
        pending_nodes.pop();

        cout<<front->data<<":";

        if(front->left != NULL)
        {
            pending_nodes.push(front->left);
            cout<<"L:"<<front->left->data;
        }
        else
        {
            cout<<"L:-1";
        }

        cout<<",";

        if(front->right != NULL)
        {
            pending_nodes.push(right->left);
            cout<<"R:"<<front->right->data;
        }
        else
        {
            cout<<"R:-1";
        }


    }


}





int main()
{
    /* manual input
    BinarytreeNode<int> * root=new BinarytreeNode<int>(1);
    BinarytreeNode<int> * node1=new BinarytreeNode<int>(2);
    BinarytreeNode<int> * node2=new BinarytreeNode<int>(3);
    root->left = node1;
    root->right = node2;
    */

    // user input




    takeinput()
    // input lvl wise
    takeinputlvl()
    
    printTree(root);
    delete root;

}


