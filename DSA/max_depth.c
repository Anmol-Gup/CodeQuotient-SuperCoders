/* struct Node {
  int data;
  struct Node *left, *right;
};
The above structure is used for tree node. */
int treeHeight(struct Node* t1)
{
	if(t1==NULL)
      return -1;
    return max(treeHeight(t1->left),treeHeight(t1->right))+1;
}
