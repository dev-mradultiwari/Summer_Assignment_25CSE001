#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,sum = 0;
    
    printf("enter order of rows and colums: ");
    scanf("%d%d",&r,&c);
    printf("enter matrix element:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        sum = sum + a[i][j];
    }
    printf(" diagonal sum = %d",sum);
    return 0;
}