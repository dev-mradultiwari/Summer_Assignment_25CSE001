#include<stdio.h>
int main()
{
    int arr[100],n,sum;
    int i,j,found=0;
    printf("enter the number of element: ");
    scanf("%d",&n);
    printf("enter the array element:\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the required sum: ");
    scanf("%d",&sum);
    printf("pairs with given sum are:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] + arr[j] ==sum)
            {
                printf("(%d, %d)\n",arr[i],arr[j]);
                found = 1;
            }
        }
    }
    if(found==0)
    {
        printf("no pair found.");
    }
    return 0;
}