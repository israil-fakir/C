#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Enter a number :");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            count=count+1;
    }
    if(count!=0)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
    return 0;
}
