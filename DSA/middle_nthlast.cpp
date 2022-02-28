// Approach-1
int countNodes(struct Node *head){
  struct Node *ptr=head;
  int count=0;
  // counting no. of nodes
   while(ptr!=NULL)
   {
     count++;
     ptr=ptr->next;
   }
  return count;
}

int findMiddle(struct Node* head) 
{
  if(head==NULL)
      return -1;
    struct Node *ptr=head,*p=head;
    int count=countNodes(head);  // no. of nodes
    for(int i=0;i<count/2;i++)
      p=p->next;
	return p->data;
}

// Find Nth node from the Last
int findNLast(struct Node* head, int n)
{
  if(head==NULL)
    return -1;
  struct Node *fast=head,*slow=head,*ptr=head;
  int count=countNodes(head);
  while(ptr->next!=NULL)
      ptr=ptr->next;
  	// return last node
  if(n>=count)
    return ptr->data;
  for(int i=0;i<n;i++)
    fast=fast->next;
  while(fast!=NULL)
  {
    slow=slow->next;
    fast=fast->next;
  }
  return slow->data;
}
// Approach-2 (Two Pointers)
Node* findNthFromLast(Node* head, int n)
{
   if (head == NULL || n <= 0)
       return NULL;
      
   Node* first = head;
   Node* second = head;
   for (int i=0; i<n; i++)
       second = second -> next;
   while (second != NULL) {
       first = first -> next;
       second = second -> next;
   }
  
   return first;
}
