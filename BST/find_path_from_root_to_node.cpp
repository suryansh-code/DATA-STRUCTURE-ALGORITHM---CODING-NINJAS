vector<int> *getPath(BinaryTreeNode<int> *root, int k) {
  if (root == NULL) {
    return NULL;
  }

  if (root->data == k) {
    vector<int> *v = new vector<int>();
    v->push_back(k);
    return v;
  }

  vector<int> *left = getPath(root->left, k);
  if (left) {
    left->push_back(root->data);
    return left;
  } else {
    vector<int> *right = getPath(root->right, k);

    if (right) {
      right->push_back(root->data);
      return right;
    }
  }

  return NULL;
}