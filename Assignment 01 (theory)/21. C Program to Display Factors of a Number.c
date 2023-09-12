#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter an integer:\n");
    scanf("%d",&num);
    for (i=1;i<=num;i=i+1)
    {
        if(num%i==0)
        {
            printf(" *");
        }
    }


    return 0;
}
