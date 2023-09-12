#include<stdio.h>
int main()
{
    int a;
    printf("Enter a year to check leap year or not:");
    scanf("%d",&a);
    if(((a%4==0)&&(a%100 !=0))||(a%400==0))
    {
        printf("%d is Leap year:",a);
    }
    else
    {
      printf("%d is not Leap year:",a);
    }


    return 0;
}
