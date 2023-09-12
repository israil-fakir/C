#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check Positive or Negative:\n");
    scanf("%d",&num);
    if(0<=num)  /*zero is positive number*/
    {
        printf("%d is a positive number.",num);
    }
    else
    {
        printf("%d is a negative number.",num);
    }
    return 0;
}
