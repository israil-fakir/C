#include<stdio.h>
int main()
{
    int a,b,sum,sub,multi,div;
    float mod;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("\nEnter a another number:");
    scanf("%d",&b);
    sum=a+b;
    printf("\nAddition of: %d",sum);
    sub=a-b;
    printf("\nSubstraction of:%d",sub);
    multi=a*b;
    printf("\nMultiplication of:%d",multi);
    div=a/b;
    printf("\nDivision of:%d",div);
    mod=a%b;
    printf("\nModulus of:%d",mod);
    return 0;
}
