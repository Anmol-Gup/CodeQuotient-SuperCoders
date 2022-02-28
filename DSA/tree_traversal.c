/* struct Node
{
  int data;
  struct Node *left, *right;
};
The above structure is used for tree node.
*/
void inorder(struct Node* root)
{
  	struct Node* ptr=root;
	if(ptr!=NULL)
    {
      inorder(ptr->left);
      printf("%d ",ptr->data);
      inorder(ptr->right);
    }
}
void preorder(struct Node* root)
{
    struct Node* ptr=root;
	if(ptr!=NULL)
    {
      printf("%d ",ptr->data);
      preorder(ptr->left);
      preorder(ptr->right);
    }
}
void postorder(struct Node* root)
{
    struct Node* ptr=root;
	if(ptr!=NULL)
    {
      postorder(ptr->left);
      postorder(ptr->right);
      printf("%d ",ptr->data);	
    }
}
