#include<stdio.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start='\0';
void add_last()
{
    int a;
    scanf("%d",&a);
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    if(start=='\0')
    {
        newnode->info=a;
        newnode->link='\0';
        start=newnode;
    }
    else
    {
        newnode->info=a;
        newnode->link='\0';
        struct node *ptr=start;
        while(ptr->link!='\0')
        {
            ptr=ptr->link;
        }
        ptr->link=newnode;
    }
}
void print()
{
    struct node *p=start;
    while(p!='\0')
    {
        printf("%d",p->info);
        p=p->link;
    }
}
void reverse()
{
     struct node *p1='\0';
    struct node *p2=start;
    struct node *p3;
    while(p2!='\0')
    {
        p3=p2->link;
        p2->link=p1;
        p1=p2;
        p2=p3;
    }
    start=p1;

}
int main()
{
    int n;
    printf("Enter no. of elements in list--\n");
    scanf("%d",&n);
    printf("ENTER ELEMENTS---\n");
    for(int i=0;i<n;i++)
    {
        add_last();
    }
    printf("LIST--\n");
    print();
    reverse();
    printf("\nREVERSED LIST--\n");
    print();
}
