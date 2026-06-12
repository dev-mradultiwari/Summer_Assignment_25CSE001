#include <stdio.h>
int main() {
    int n, i;
    long long t1 = 0, t2 = 1, nthTerm;

    printf("Enter the value of n to find the nth Fibonacci term: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Please enter a positive integer greater than 0.\n");
    } 
    else if (n == 1) {
        printf("The 1st Fibonacci term is: %lld\n", t1);
    } 
    else if (n == 2) {
        printf("The 2nd Fibonacci term is: %lld\n", t2);
    } 
    else {
        for (i = 3; i <= n; ++i) {
            nthTerm = t1 + t2; 
            t1 = t2;           
            t2 = nthTerm;    
        }
        
        printf("The %dth Fibonacci term is: %lld\n", n, t2);
    }

    return 0;
}