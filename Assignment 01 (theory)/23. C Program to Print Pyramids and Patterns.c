#include<stdio.h>
int main()
{
    int i,j,num;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i=i+1)
    {
        for(j=1;j<=i;j=j+1)
        {
        printf(" *");
        }
        printf("\n");
    }
    return 0;
}
