#include <stdio.h>
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE];
    int n;
    int evenCount = 0;
    int oddCount = 0;

    printf("Enter the number of elements (1 to %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Error: Invalid size. Must be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Error: Invalid input. Expected an integer.\n");
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++; 
        }
    }

    printf("\n--- Results ---\n");
    printf("Total Even Elements = %d\n", evenCount);
    printf("Total Odd Elements  = %d\n", oddCount);

    return 0;
}