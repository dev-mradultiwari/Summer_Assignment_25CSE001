#include <stdio.h>
#define MAX_SIZE 100 

int main(){
    int arr[MAX_SIZE];
    int n;

    printf("Enter the number of elements (1 to %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Error: Invalid size. Number must be between 1 and %d.\n", MAX_SIZE);
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

    printf("\nThe stored array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}