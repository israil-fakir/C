#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the three number here:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if((num1>num2) &&(num1>num2))
    {
        printf("%d is Largest number.",num1);
    }
    if ((num2>num3) && (num2>num1))
    {
        printf("%d is Largest number.",num2);
    }
    if ((num3>num2) && (num3>num1))
    {
        printf("%d is Largest number.",num3);
    }
    else
    {

        printf("There are equal number");

    }
    return 0;
}
