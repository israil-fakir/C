#include<stdio.h>
#include<string.h>
int main()
{
    char s[500];
    int re;
    printf("Enter a string to reverse :");
    scanf("%s",s);
    re=strrev(s);
    printf("Reversed the string : %s",re);
    return 0;
}
