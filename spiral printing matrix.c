#include<stdio.h>
int main()
{
    int ar[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int a=0,b=0,c=3,d=3;
    printf("SPIRAL PRINTING---\n");
    while(a-c!=1)
    {


    for(int i=a;i<c;i++)
    {
        printf("%d\n",ar[a][i]);
    }
    for(int i=b;i<c;i++)
    {
        printf("%d\n",ar[i][c]);
    }
    for(int i=c;i>b;i--)
    {
        printf("%d\n",ar[c][i]);
    }
    for(int i=d;i>a;i--)
    {

        printf("%d\n",ar[i][a]);
    }
    a++;b++;c--;d--;
    }
}
