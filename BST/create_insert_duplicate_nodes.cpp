/*
Create & Insert Duplicate Node

For a given a Binary Tree of type integer, duplicate every node of the tree and attach it to the left of itself.
The root will remain the same. So you just need to insert nodes in the given Binary Tree.
*/

void insertDuplicateNode(BinaryTreeNode<int> *root) {
  // Write your code here
  if (root == NULL)
    return;

  BinaryTreeNode<int> *duplicate = new BinaryTreeNode<int>(root->data);
  duplicate->left = root->left;
  root->left = duplicate;

  insertDuplicateNode(duplicate->left);
  insertDuplicateNode(root->right);
}