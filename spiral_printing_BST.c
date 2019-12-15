#include<stdio.h>
struct node{
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
    else{
        struct node *p=root;
        struct node *q;
        while(p!='\0')
        {
            if(a<p->data)
            {
                q=p;
                p=p->left;
            }
            else{
                q=p;
                p=p->right;
            }
        }
        if(a<q->data)
        {
            q->left=newnode;
        }
        else
        {
            q->right=newnode;
        }
    }
}
void print(struct node *t)
{
    if(t=='\0')
    {
        return;
    }
        printf("%d ",t->data);

    print(t->left);
    print(t->right);



}
int height(struct node *z)
{
    if(z=='\0')
    {
        return 0;
    }
    else
    {
            int hl=height(z->left);
            int hr=height(z->right);
            if(hl>hr)
            {
                return hl+1;
            }
            else
                {
                    return hr+1;
                }
    }


}
void spiral(struct node *t,int i,int j)
{
    if(t=='\0')
    {
        return;
    }
    else
    {
        if(i==1)
        {
            printf("%d ",t->data);
        }
        else
            {
                if(j%2==0)
                {
                    spiral(t->right,i-1,j);
                    spiral(t->left,i-1,j);
                }
                else
                    {
                         spiral(t->left,i-1,j);
                         spiral(t->right,i-1,j);
                    }
            }
    }
}
int main()
{
    insert(50);
    insert(40);
    insert(30);
    insert(60);
    insert(55);
    insert(70);
    insert(45);
    print(root);
    printf("\n");
    int h=height(root);
    printf("HEIGHT==%d",h);
    printf("\n");
    printf("SPIRAL PRINTING--\n");
    for(int i=1;i<=h;i++)
    {
            spiral(root,i,i);
            printf("\n");
    }
}
