#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,count=0;
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("Length :%d",count);

    return 0;
}
