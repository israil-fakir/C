#include<stdio.h>
int main()
{
    int x,num,rem,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    x=num;
    while(x!=0)
    {
        rem=x%10;
        sum+=rem*rem*rem;
        x=x/10;
    }
    if(sum==num)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
    return 0;
}
