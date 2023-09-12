#include<stdio.h>
int main()
{
    int num,i=1;
    long sum=0,tsum;
    long int term=1;
    printf("Enter the number of Term:\n");
    scanf("%d",&num);
    while(i<=num-1)
    {
        printf("%d+",term);
        sum=sum+term;
        term=(term*10)+1;
        i=i+1;
    }
    printf("%d=",term);
    tsum=sum+term;
    printf("%ld",tsum);
    return 0;
}
