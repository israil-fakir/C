#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    char str2[50];
    int com;
    printf("Enter the 1st string:");
    gets(str1);
    printf("Enter the 2nd string:");
    gets(str2);
    com=strcmp(str1,str2);
    if(com==0)
    {
        printf("There are equal");
    }
    else
    {
        printf("There are not equal");
    }
    return 0;
}
