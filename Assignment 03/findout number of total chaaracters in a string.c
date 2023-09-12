#include<stdio.h>
#include<string.h>
int main()
{
    char s[500];
    int i;
    int totalchar=0;
    printf("Enter a string to count:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        totalchar++;
    }
    printf("Entered string value :%d",totalchar);
    getch(s);

    return 0;
}
