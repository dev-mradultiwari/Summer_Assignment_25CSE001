#include<stdio.h>
int main()
{
    int arr[100],i,j,n;
    printf("enter number of elements :");
    scanf("%d",&n);
    printf("enter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("duplicate element are:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d ",arr[i]);
                break;
    
            }
        }
    }
    return 0;
}