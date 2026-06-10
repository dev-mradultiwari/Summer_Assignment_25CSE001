#include <stdio.h>
int main(){
    int n, ldg, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n>0) {
        ldg=n%10;  
        sum=sum+ldg;
        n=n/10;     
    }
    printf("Sum = %d", sum);

    return 0;
}