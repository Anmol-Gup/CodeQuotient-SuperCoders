// Approach-1 (Iterative)
struct Node*  reverseList(struct Node* head) 
{
	struct Node *prev=NULL, *current=head, *nextNode=NULL;
  	while(current!=NULL){
      nextNode=current->next; // point to current's next node
      current->next=prev; // current node point to previous node
      prev=current;  // previous pointing to current node
      current=nextNode;
    }
  	head=prev; // head pointing last node
  return head;
}

// Approach-2 (Recursive)
Node* reverse(Node* prev, Node* curr)
{
    if (curr == NULL)
 	   return prev;
    Node* next = curr->next;
    curr->next = prev;
    return reverse(curr, next);
}

