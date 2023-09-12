#include<stdio.h>
int main()
{
    int oc,de=0,rem,base=1;
    printf("Enter the Octal number :");
    scanf("%d",&oc);
    while(oc>0)
    {
        rem=oc%10;
        de=de+rem*base;
        oc=oc/10;
        base=base*8;
    }
    printf("Decimal number :%d",de);
    return 0;
}

