#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter a integer :");
    scanf("%d",&num);
    for(i=1;i<=num;i=i+1)
    {
    sum=sum+i;
    }
    printf("Sum=%d",sum);
    return 0;
}
