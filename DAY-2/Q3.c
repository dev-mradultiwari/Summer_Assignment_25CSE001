#include <stdio.h>
int main(){
    int n, ldg, product=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n==0)
    {
        printf("Product is zero");
    }
    else{
        while (n>0) { 
        ldg=n%10;  
        product=product*ldg;
        n=n/10;     
        }
    printf("Product = %d", product);
}
    return 0;
}