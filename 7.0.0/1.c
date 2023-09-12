#include<stdio.h>
int addnumber(int a ,int b); //function prototype
int main()
{
    int num1,num2,sum;
    printf("Enter two number to sum:\n");
    scanf("%d%d",&num1,&num2);

    sum=addnumber(num1,num2); // function call
    printf("Sum=%d",sum);
    return 0;
}
int addnumber(int a,int b) //function definiton
{
    int re;
    re=a+b;
    return re;        // return statement
}
