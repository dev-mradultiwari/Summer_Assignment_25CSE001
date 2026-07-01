#include<stdio.h>
int main()
{
    char str[100];
    int i,words = 1;
    printf("enter a sentence:  ");
    scanf("%[^\n]",str);
    for(i=0;str[i]!= '\0'; i++)
    {
        if(str[i]==' ')
        words++;
    }

    printf("number of words = %d", words);
    return 0;
}