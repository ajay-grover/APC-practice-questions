#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root='\0';
void insert(int a)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=a;
    newnode->left='\0';
    newnode->right='\0';
    if(root=='\0')
    {
        root=newnode;
    }
    else
    {
        struct node *p=root;
        struct node *q=root;
        while(p!='\0')
        {
            if(a<p->data)
            {
                q=p;
                p=p->left;
            }
            else
            {
                q=p;
                p=p->right;
            }
        }
        if(a<q->data)
            q->left=newnode;
        else
            q->right=newnode;

    }
}
void print(struct node *t)
{
    if(t=='\0')
        return;
    else

    print(t->left);
      printf("%d ",t->data);
    print(t->right);
}
int min=0;
int max=0;
void minmax(struct node *t,int x)
{
    if(t=='\0')
        return;
    if(x<min)
        min=x;
    if(x>max)
        max=x;
    minmax(t->left,x-1);
    minmax(t->right,x+1);
}
void vertical(struct node *t,int i,int y)
{
    if(t=='\0')
        return;
    if(y==i)
        printf("%d ",t->data);
    vertical(t->left,i,y-1);
    vertical(t->right,i,y+1);
}
int main()
{
    insert(50);
    insert(40);
    insert(60);
    insert(30);
    insert(70);
    insert(45);
    insert(55);
    print(root);
    printf("\nVertical order printing---\n");
     minmax(root,0);
    for(int i=min;i<=max;i++)
    {
           vertical(root,i,0);
            printf("\n");
    }
}
