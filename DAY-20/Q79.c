#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,sum;
    printf("enter number of rows and cloums: ");
        scanf("%d%d",&r,&c);
        printf("enter matrix elements:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("row wise sum:\n");
        for(i=0;i<r;i++)
        {
            sum=0;
            for(j=0;j<c;j++)
            {
                
                
                    sum = sum + a[i][j];
                }
                printf("sum of rows %d =%d\n",i+1,sum);

            }
            return 0;
        }

