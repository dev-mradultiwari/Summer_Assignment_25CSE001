#include<stdio.h>
int main()
{
    int arr[100],n,key,low,high,i,mid;
    printf("enter number of elements: ");
    scanf("%d",&n);
    printf("enter sorted elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element to search; ");
    scanf("%d",&key);
    low=0;
    high =n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("element found at index %d",mid);
            return 0;
        }
        else if(arr[mid]<key)
        {
            low = mid+1;
        }
    }
    printf("element not found");
    return 0;
}