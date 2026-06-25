#include<stdio.h>
int main()
{
    int n,i,sum=0,expectedsum,missingnumber;
    printf("enter value of n: ");
    scanf("%d",&n);
    int arr[n-1];
    printf("enter %d elements :\n",n-1);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        sum +=arr[i];
    }
    expectedsum = n*(n+1)/2;
    missingnumber = expectedsum - sum;
    printf("missing number = %d\n",missingnumber);
    return 0;
}