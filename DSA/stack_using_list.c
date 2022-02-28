int isEmpty()
{
	if(main_Stack==NULL)
      return 0;
  	return 1;
}
void push(int data)
{
  struct StackLL *new=(struct StackLL*)malloc(sizeof(struct StackLL));
  new->data=data;
  new->next=main_Stack;
  main_Stack=new; 
}
int pop()
{
  	int data;
	if(!isEmpty())
      return -1;
  	else
    {
		struct StackLL *prev=main_Stack;
      	data=prev->data;
      	main_Stack=main_Stack->next;
      	free(prev);
    }
  return data;
}
