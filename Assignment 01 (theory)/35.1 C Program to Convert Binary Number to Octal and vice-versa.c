#include <stdio.h>
int main()
{
     int bi,oct=0,j=1,rem;

    printf("Enter binary number: ");
    scanf("%d",&bi);
    while (bi!=0)
    {
        rem=bi%10;
        oct=oct+rem*j;
        j=j*2;
        bi=bi/10;
    }
    printf("Octal value: %d",oct);
    return 0;
}
