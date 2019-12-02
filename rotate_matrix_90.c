#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of square matrix\n");
    scanf("%d",&n);
    printf("Enter values of matrix\n");
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int x=0,y=n-1;
    while(1)
    {

    int t=0;int j=y;
     if(n%2==0)
        {
            if(x-y==1)
            {
                break;
            }

        }
        else
        {
            if(x==y)
            {
                break;
            }

        }


    for(int i=x;i<y;i++)
    {

        t=a[x][i];
        a[x][i]=a[i][y];
        a[i][y]=t;
    }
      for(int i=x;i<y;i++)
    {

        t=a[x][i];
        a[x][i]=a[y][j];
        a[y][j]=t;
        j=j-1;
    }
    j=y;
      for(int i=x;i<y;i++)
    {

        t=a[x][i];
        a[x][i]=a[j][x];
        a[j][x]=t;
        j=j-1;
    }
    x=x+1;
    y=y-1;
    }
    printf("Rotated matrix\n");
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {

            printf("%d ",a[i][j]);
        }
        printf("\n");
    }



}
