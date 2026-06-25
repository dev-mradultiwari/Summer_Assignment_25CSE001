#include<stdio.h>
int main()
{
    int arr[100],n;
    int i,j;
    int count,maxcount=0;
    int maxelement;
    printf("enter the number of element: ");
    scanf("%d",&n);
    printf("enter the array element:\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count =1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count > maxcount)
        {
            maxcount = count;
            maxelement= arr[i];
        }
    }
    printf("element with maximum frequency = %d\n",maxelement);
    printf("frequency = %d\n",maxcount);
    return 0;
}