/* struct Node
{
  int data;
  struct Node *left, *right;
};
The above structure is used for tree node. */
// Using Inorder Traversal
#include <stdio.h>
#include <limits.h>

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};

int prev = INT_MIN;

int isBinarySearchTree(struct Node* node)
{
	if (node == NULL)
	    return 1;
	
    if (!isBinarySearchTree(node->left))
        return 0;
    
    if (node->data <= prev)
        return 0;
        
    prev = node->data;
    
    return isBinarySearchTree(node->right);
}

struct Node* newNode(int data)
{
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

int main()
{
	struct Node* root = newNode(4);
	
	root->left = newNode(2);
	root->right = newNode(7);
	root->left->left = newNode(1);
	root->left->right = newNode(3);
	root->right->left = newNode(5);
	root->right->right = newNode(8);
	
	if (isBinarySearchTree(root))
	    printf("Given tree is a BST");
	else
	    printf("Given tree is not a BST");
	
	return 0;
}
