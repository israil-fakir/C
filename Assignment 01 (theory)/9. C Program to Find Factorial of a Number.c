#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter a number to find the Factorial:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        fact=fact*i;
    }

    printf("%d! Factorial = %d",num,fact);

    return 0;
}
