#include<stdio.h>
int main()
{
    char str[100];
    char *ptr;
    int length= 0; 
    printf("enter a string: ");
    scanf("%s" , str);
    ptr = str ;
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
    printf("length of string = %d", length);
    return 0;
}