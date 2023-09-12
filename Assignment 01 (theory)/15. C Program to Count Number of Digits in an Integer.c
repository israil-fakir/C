#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a positive number : ");
    scanf("%d",&num);
    while(num !=0)
    {
        num=num/10;
        count=count+1;
    }
    printf("Total Digits: %d",count);
    return 0;
}
