#include <stdio.h>
int main(){
    int n, ldg, reverse=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n>0) {
        ldg= n%10;               
        reverse=reverse*10+ldg;
        n=n/10;                   
    }
    printf("Reversed number = %d", reverse);
    
    return 0;
}