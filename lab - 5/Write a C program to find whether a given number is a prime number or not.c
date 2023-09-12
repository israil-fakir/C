#include<stdio.h>
int main()
{
    int num,count=0,i;
    printf("Enter a number to check prime or not prime number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
    return 0;
}
