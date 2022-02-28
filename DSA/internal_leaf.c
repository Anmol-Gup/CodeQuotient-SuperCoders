/* struct Node
{
  int data;
  struct Node *left, *right;
};
The above structure is used for tree node. */
int countLeafs(struct Node* root) 
{
	if(!root)
      return 0;
    if(!root->left && !root->right)
      return 1;
  	return countLeafs(root->left)+countLeafs(root->right);
}
int countNonLeafs(struct Node* root) 
{
	if(!root || (!root->left && !root->right))
      return 0;
  	return 1+countNonLeafs(root->left)+countNonLeafs(root->right);
}
