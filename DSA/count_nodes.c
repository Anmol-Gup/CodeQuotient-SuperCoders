int countNodes(struct Node* head){
  // Write your code here
  if(head==NULL)
    return 0;
  struct Node *ptr=head;
  int count=0;
  do{
    count++;
    ptr=ptr->next;
  }while(ptr!=head);
  return count;
}
