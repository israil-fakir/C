#include<stdio.h>
int main()
{
    int n,sum=0,ld,fd;
    printf("Enter any number:");
    scanf("%d",&n);
    ld=n%10;
    fd=n;
    while(n>=10)
    {
        n=n/10;
    }
    fd=n;
    sum=fd+fd;
    printf("Sum of First and Last digit=%d",sum);
    return 0;
}
