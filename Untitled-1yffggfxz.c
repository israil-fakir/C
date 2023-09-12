#include<stdio.h>
int addnumber (int num1, int num2)
{
    int result;
    result= num1 + num2;
    return result;
}
int main()
{
    int a,b,x;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    x=addnumber(a,b);
    printf("\n Result =%d",x);
}
