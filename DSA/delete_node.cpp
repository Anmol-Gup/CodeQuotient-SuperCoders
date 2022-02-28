void deleteNodeK(struct Node* n1) 
{
	if(n1==NULL)
      return;
  	if(n1->next==NULL)
      return;
  	struct Node *nxt=n1->next;
  	n1->data=nxt->data;
  	n1->next=nxt->next;
  	free(nxt);
}
