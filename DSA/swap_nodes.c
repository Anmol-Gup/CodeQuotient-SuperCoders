void swap(Node *x, Node *y){
  Node *t=x;
  x=y;
  y=t;
}
void swapNodes(Node** head, int x, int y){
  // Write your code here
  Node *first=NULL, *second=NULL;
  Node *current=*head;
  // searching element
  while(current!=NULL){
    if(current->data==x)
      first=current;
    if(current->data==y)
      second=current;
    if(first!=NULL && second!=NULL)
      break;
    current=current->next;
  }
  // for element doesn't exists
  if(first==NULL || second==NULL)
    return;
  // if first is a head.
  if(first->prev==NULL)
    *head=second;
  else
    first->prev->next=second;
  first->next->prev=second;
  // if second is a last node.
  if(second->next!=NULL)
    second->next->prev=first;
  second->prev->next=first;
  Node *temp=first->next;
  first->next=second->next;
  second->next=temp;
  Node *temp1=first->prev;
  first->prev=second->prev;
  second->prev=temp1;
}
