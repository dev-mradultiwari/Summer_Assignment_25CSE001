#include<stdio.h>
int main()
{
    int arr[100],n,i,key,found=0;
    printf("enter number of elements :");
    scanf("%d",&n);
    printf("enter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            found =1;
            printf("element found at posistion %d",i+1);
            break ;
        }
    }
    if(found==0)
    {
        printf("element not found");
    }
    return 0;
}