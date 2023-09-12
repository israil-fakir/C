#include<stdio.h>
struct number
{
    int num;
};
struct number var;
int main()
{
    printf("Enter a number to check positive or negative:");
    scanf("%d",&var.num);
    if(var.num > 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }
    return 0;
}
