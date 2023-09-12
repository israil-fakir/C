#include<stdio.h>
int main()
{
    float sum=1,x,y=1;
    int i,n ;
    printf("Enter the value of X:");
    scanf("%f",&x);
    printf("Enter the terms:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
       y=y*x/i;
       sum=sum+y;
    }
    printf("The sum =%2f",sum);
    return 0;

}
