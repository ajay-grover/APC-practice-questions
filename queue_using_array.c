#include<stdio.h>
#define SIZE 10
int front=-1, rear=-1;
int array[SIZE];




void enqueue(int item)
{
	if(rear==SIZE-1)
    {
      return;
    }
  else if(front==-1&&rear==-1)
  {
    front++;
    rear++;
  }
  else
  {
    rear++;
  }
  array[rear]=item;
}


int dequeue()
{
	if(front==-1)
    {
      return -1;
    }
  int x=array[front];
  if(front==rear)
  {
    front=-1;
    rear=-1;
  }
  else
  {
    front++;
  }
  return x;
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    while(rear!=-1)
    {
    int a=dequeue();
    printf("%d ",a);
    }



}
