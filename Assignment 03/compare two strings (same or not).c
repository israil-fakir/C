#include<stdio.h>
#include<string.h>
int main()
{
    char s1[500];
    char s2[500];
    int j;
    printf("Enter 1st string :");
    scanf("%s",s1);
    printf("Enter 2nd string :");
    scanf("%s",s2);
    j=strcmp(s1,s2);
    if(j==0)
    {
        printf("Same");
    }
    else
    {
        printf("Not same");
    }
    return 0;
}
