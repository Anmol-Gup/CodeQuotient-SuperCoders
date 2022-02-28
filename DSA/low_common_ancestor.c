/* struct Node
{
  int data;
  struct Node *left, *right;
};
The above structure is used for tree node. */

// Approach-1 (Using Recursion)
int lowestCommonAncestor(struct Node* root, int k1, int k2)
{
 if(root==NULL)
   return -1;
  // left subtree
  if(root->data>k1 && root->data>k2)
    return lowestCommonAncestor(root->left,k1,k2);
  	// right subtree  
  if(root->data<k1 && root->data<k2)
    return lowestCommonAncestor(root->right,k1,k2);
  return root->data;
}

// Approach-2 (Iteration)
struct Node* LCA(struct Node* node, int a, int b)
{
	if (node == NULL)
		return NULL;
		
	while (node)
	{
	    if (node->data > a && node->data > b)
	        node = node->left;
	    else if (node->data < a && node->data < b)
	        node = node->right;
	    else
	        break;
	}

	return node;
}
