#include<stdio.h>

int pow(int x,int y)
{
    int r=1,i;
    for(i=1;i<=y ;i++)
    {
        r=r*y;
    }
    return r;
}

int main()
{
    long long int b,p,r;
    printf("Enter a base:");
    scanf("%d",&b);
    printf("Enter a power:");
    scanf("%d",&p);
    printf("%d ^ %d = %d",b,p,pow(b,p));
    return 0;
}
