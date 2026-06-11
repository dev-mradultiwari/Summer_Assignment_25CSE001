#include <stdio.h>
int main() {
    int start, end, i, j, check;
    printf("start number: ");
    scanf("%d", &start);
    printf("end number: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are:\n", start, end);
    
    for (i=start; i<=end; i++) {
        if (i<=1)
            continue;
        check=0;
        for (j=2; j<=i/2; j++) {
            if (i%j==0) {
                check=1;
                break;
            }
        }

        if (check==0)
            printf("%d ", i);
    }
    return 0;
}