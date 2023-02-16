// check if binary tree is in the form of bst or not
//with better time complexity
 
 #include <cmath>
#include <limits.h>

class Pair {

public:
  int minimum;
  int maximum;
  bool bst;
};

Pair BST(BinaryTreeNode<int> *root) {
  if (root == NULL) {
    Pair obj;
    obj.minimum = INT_MAX;
    obj.maximum = INT_MIN;
    obj.bst = true;
    return obj;
  }

  Pair left = BST(root->left);
  Pair right = BST(root->right);

  int minimum = min(root->data, min(left.minimum, right.minimum));
  int maximum = max(root->data, max(left.maximum, right.maximum));
  bool isBSTfinal = (root->data > left.maximum) &&
                    (root->data < right.minimum) && left.bst && right.bst;

  Pair obj;
  obj.minimum = minimum;
  obj.maximum = maximum;
  obj.bst = isBSTfinal;
  return obj;
}

bool isBST(BinaryTreeNode<int> *root) { return BST(root).bst; }