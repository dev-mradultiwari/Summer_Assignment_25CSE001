#include<stdio.h>
int main()
{
    int a[100],b[100];
    int n1,n2,i,j,found;
    printf("enter size of first array: ");
    scanf("%d",&n1);
    printf("enter element of first array:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter size of second array:\n");
    scanf("%d",&n2);
    printf("enter element of second array:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("union of arrays: ");
    for(i=0;i<n1;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<n2;i++)
    {
        found =0;
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
            {
                found = 1;
                break;
            }
        }
        if(found==0)
        {
            printf("%d",b[i]);
        }
    }
    return 0;
}