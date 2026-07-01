#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,j,len1,len2,flag=1;
    printf("enter first string: ");
    scanf("%s",str1);
    printf("enter second string: ");
    scanf("%s",str2);
    len1 = strlen(str1);
    len2 = strlen(str2); 
    if (len1 != len2)
    {
        printf("not anagram");
        return 0;
    }
    for(i=0;i<len1;i++)
    {
        int count1=0 , count2=0;
        for(j=0;j<len1;j++)
        {
            if(str1[i] == str1[j])count1++;
if(str2[i] == str2[j])count2++;

        }
        if (count1 != count2)
        {
            flag = 0 ;
            break;
        }
    }
    if(flag)
    printf("anagram");
    else
    printf("not anagram");
    return 0;


}