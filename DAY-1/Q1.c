#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<1)
    {
        printf("Enter the valid positive number");
    }
    else{
    int sum = n*(n+1)/2;
     printf("Sum = %d", sum);
    }

    return 0;
}