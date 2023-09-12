#include<stdio.h>
#include<string.h>
int main()
{
    char str1[200];
    char str2[200];
    printf("Enter the 1st string:");
    gets(str1);
    printf("Enter the 2nd string:");
    gets(str2);
    printf("1st string :%s",str1);
    printf("\n2nd string :%s",str2);
    strcpy(str2,str1);
    printf("\nAfter copying string 1st:%s",str2);
    printf("\nAfter copying string 2nd:%s\n",str1);
    return 0;
}
