/*
LCA of Binary Tree

Given a binary tree and data of two nodes, find 'LCA' (Lowest Common Ancestor) of the given two nodes in the binary tree.
LCA
LCA of two nodes A and B is the lowest or deepest node which has both A and B as its descendants. 

Example:
In this example, the green coloured node is the LCA to A and B.
*/

int getLCA(BinaryTreeNode<int> *root, int val1, int val2) {
  if (root == NULL)
    return -1;
  if (root->data == val1 || root->data == val2)
    return root->data;

  int left = getLCA(root->left, val1, val2);
  int right = getLCA(root->right, val1, val2);

  if (left == -1 && right == -1)
    return -1;
  else if (left != -1 && right == -1)
    return left;
  else if (left == -1 && right != -1)
    return right;
  else
    return root->data;
}