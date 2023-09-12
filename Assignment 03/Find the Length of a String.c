#include<stdio.h>
#include<string.h>
int main()
{
    char s[500];
    int length;
    printf("Enter a string to find the length :");
    gets(s);
    length=strlen(s);
    printf("Entered string length %d:",length);
    return 0;
}
