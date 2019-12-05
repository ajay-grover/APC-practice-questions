/*
struct StackLL
{
  int data;
  struct StackLL* next;
};
struct StackLL* main_Stack = NULL;	// The stack head to be used for operations.
*/
int isEmpty()
{
	if(main_Stack=='\0')
    {
      return 1;
    }
  else
  {
    return 0;
  }
}

void push(int data)
{
	struct StackLL *newnode=(struct StackLL*)malloc(sizeof(struct StackLL));
  newnode->data=data;
  if(main_Stack=='\0')
  {
    newnode->next='\0';
    main_Stack=newnode;
  }
  else
  {
    newnode->next=main_Stack;
    main_Stack=newnode;
  }
}

int pop()
{
	if(isEmpty())
    {
      return -1;
    }
  int a=main_Stack->data;
  main_Stack=main_Stack->next;
  return a;
}
