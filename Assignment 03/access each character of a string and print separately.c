#include<stdio.h>
#include<string.h>
int main()
{
    char str[500];
    int l=0;
    printf("Enter a string: ");
    scanf("%s",str);
    l=strlen(str);
    for(int i=0;i<l;i++)
    {
        printf("%c ",str[i]);
    }

    return 0;
}
