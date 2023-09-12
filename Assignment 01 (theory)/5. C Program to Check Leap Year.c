#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year to check Leap or not Leap year:\n");
    scanf("%d",&year);
    if(((year%4==0)&(year%100!=0))||(year%400==0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}
