
void elementsInRangeK1K2(BinaryTreeNode<int> *root, int k1, int k2) {

  if (NULL == root)
    return;

  if (k1 < root->data)
    elementsInRangeK1K2(root->left, k1, k2);

  if (k1 <= root->data && k2 >= root->data)
    cout << root->data << " ";

  if (k2 > root->data)
    elementsInRangeK1K2(root->right, k1, k2);
}