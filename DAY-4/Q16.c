#include <stdio.h>
int main() {
    int start, end, i, currentNum, remainder, digits, sum;
     printf("Enter the start number: ");
    scanf("%d", &start);
    printf("Enter the end number: ");
    scanf("%d", &end);
    printf("\nArmstrong numbers between %d and %d are:\n", start, end);
    printf("--\n");

    for (i = start; i <= end; ++i) {
        if (i < 0) continue;
        digits = 0;
        sum = 0;
        currentNum = i;
    
        while (currentNum != 0) {
            currentNum /= 10;
            digits++;
        }

        currentNum = i; 

        while (currentNum != 0) {
            remainder = currentNum % 10;
            
            int power = 1;
            for(int j = 0; j < digits; j++) {
                power *= remainder;
            }
            
            sum += power;
            currentNum /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n"); 

    return 0;
}