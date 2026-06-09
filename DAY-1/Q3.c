#include <stdio.h>
int main(){
    int n, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n>=0)
    {
        for (int i = n; i > 0; i--)
        {
            fact*=i;
        }
        printf("The factorial is %d", fact);
    }
    else{
        printf("Enter the valid number");
    }

    return 0;
}