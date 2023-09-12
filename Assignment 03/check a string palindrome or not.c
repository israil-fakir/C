#include<stdio.h>
#include<string.h>
int main()
{
    char st[500];
    int i,le,temp;
    printf("Enter a string:");
    scanf("%s",st);
    le=strlen(st);
    //printf("%d",le);
    for(i=0;i<le;i++)
    {
        if(st[i]!=st[le-i-1])
        {
            temp=1;
        }
    }
    if(temp)
    {
        printf("Palindrome");
    }
    else
    {
         printf("Not Palindrome");
    }
    return 0;
}
