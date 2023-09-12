#include<stdio.h>
int main()
{
    int t1=0,t2=1,n,sum=0;
    printf("Enter a integer:");
    scanf("%d",&n);
    printf("Fibonacci series: %d  %d  ",t1,t2);
    sum=t1+t2;
    while (sum<=n)
    {
        printf("%d ",sum);
        t1=t2;
        t2=sum;
        sum=t1+t2;
    }
return 0;
}
