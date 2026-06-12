#include <stdio.h>
int main() {
    int originalN, n, remainder, digits = 0;
    double sum = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &originalN);
    n = originalN;

    while (n != 0) {
        n /= 10;
        digits++;
    }
    n = originalN;
    while (n != 0) {
        remainder = n % 10;                     
        
        int power = 1;
        for(int i = 0; i < digits; i++) {
            power *= remainder;
        }
        
        sum += power;                           
        n /= 10;                                
    }
    if ((int)sum == originalN) {
        printf("%d is an Armstrong number.\n", originalN);
    } 
    else {
        printf("%d is NOT an Armstrong number.\n", originalN);
    }

    return 0;
}