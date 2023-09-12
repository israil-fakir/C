#include<stdio.h>
#include<string.h>
struct na
{
    char name[30];
}n;
struct addr
{
    char address[50];
}a;
int main()
{
    printf("Enter your full name:");
    fgets(n.name,sizeof(n.name),stdin);
    printf("Enter your address :");
    fgets(a.address,sizeof(a.address),stdin);


    printf("Name: ");
    printf("%s",n.name);
    printf("Your address :");
    printf("%s",a.address);

    return 0;
}
