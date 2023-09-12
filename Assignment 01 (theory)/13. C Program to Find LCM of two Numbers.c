#include<stdio.h>
int main()
{
    int num1,num2,i,gcd,lcn;
    printf("Enter a two number for LCM:\n");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num1 && i<=num2;i++)
    {
     if((num1%i==0)  && (num2%i==0));
        gcd=i;
    }
    lcn=(num1*num2)/gcd;
     printf("LCM =%d",lcn);
    return 0;
}
