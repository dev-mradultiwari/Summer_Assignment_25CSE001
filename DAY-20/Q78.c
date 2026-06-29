#include<stdio.h>
int main()
{
    int a[10][10],n,i,j,flag=1;
    printf("enter order of matrix: ");
    scanf("%d",&n);
    printf("enter matrix elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag)
    {
        printf("matrix is symmetrical");
    }
    else{
        printf("matrix  is not symmetrical");
    }
    return 0;
}