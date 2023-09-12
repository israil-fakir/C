#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character to check alphabet or not:");
    scanf("%c",&ch);
    if(('a'<=ch && 'z'>=ch) || ('A'<=ch && 'Z'>=ch))
    {
        printf("%c is an alphabet",ch);
    }
    else
    {
     printf("%c is not an alphabet",ch);
    }

    return 0;
}
