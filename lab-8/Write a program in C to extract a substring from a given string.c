#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char sstr[100];
    int l,po,c=0;
    printf("Enter a string:");
    fgets(str,sizeof str,stdin);
    printf("Enter the position to get substring:");
    scanf("%d",&po);
    l=strlen(str);
    while(c<l)
    {
        sstr[c]=str[po+c-1];
        c++;
    }
    sstr[c]='\0';
    printf("The substring: %s",sstr);
    return 0;
}
