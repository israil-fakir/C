#include<stdio.h>
int main()
{
    int bi,de=0,rem,base=1;
    printf("Enter the binary number :");
    scanf("%d",&bi);
    while(bi>0)
    {
        rem=bi%10;
        de=de+rem*base;
        bi=bi/10;
        base=base*2;
    }
    printf("Decimal :%d",de);
    return 0;
}

