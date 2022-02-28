int count(Node *head){
  int c=0;
  while(head!=NULL)
  {
    c+=1;
    head=head->next;
  }
  return c;
}

Node *mergePoint(Node *curr1, Node *curr2){
  while(curr1!=NULL && curr2!=NULL){
		if(curr1==curr2)
          return curr1;
        curr1=curr1->next;
        curr2=curr2->next;
   }
  return NULL;
}

Node *traverse(int d, Node *ptr)
{
  if(ptr==NULL)
    return ptr;
  else
    for(int i=1;i<=d;i++)
      ptr=ptr->next;
  return ptr;
}

Node* findMergePoint(Node* head1,Node* head2) {
  // Write your code here
  if(head1==NULL || head2==NULL)
    return NULL;
  int count1=count(head1),count2=count(head2);
  Node *curr1=head1,*curr2=head2;
  int d;
  if(count1>count2){
    d=count1-count2;
    curr1=traverse(d,curr1);
  }
  else{
    d=count2-count1;
    curr2=traverse(d,curr2);
  }
  return mergePoint(curr1,curr2);
}

// Using Hashing
Node* findMergePoint(Node* head1, Node* head2)
{
       unordered_set <Node*> set ;
    Node *curr1 = head1;
    while (curr1 != NULL)
    {
 	   set.insert(curr1);
 	   curr1 = curr1->next;
    }
    Node *curr2 = head2;
       while (curr2 != NULL)
       {
        	if (set.find(curr2) != set.end())
                       return curr2;
               curr2 = curr2->next;
       }
    return NULL;
}
