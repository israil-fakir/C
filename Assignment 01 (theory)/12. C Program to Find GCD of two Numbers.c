#include<stdio.h>
int main()
{
    int num1,num2,i;
    printf("Enter a two number for GCD:\n");
    scanf("%d%d",&num1,&num2);
    for (i=1;((i<=num1) && (i<=num2));i++)
    {
        if((num1%i==0)&&(num2%i==0));
    }
    printf("The greatest common divisor of %d and %d is equal %d.",num1,num2,i);
    return 0;
}
