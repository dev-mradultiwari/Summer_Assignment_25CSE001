#include <stdio.h>
int main(){
    int n, original, ldg, reverse=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original=n;
    while (n>0) {
        ldg=n%10;
        reverse=reverse*10+ldg;
        n=n/10;
    }

    if (original == reverse) {
        printf("Palindrome Number");
    } 
    else {
        printf("Not a Palindrome Number");
    }

    return 0;
}