#include <stdio.h>
#include <math.h>
int main()
{
    int  j,i=0,octal,decimal=0,a[100];
    printf("Enter octal number: ");
    scanf("%d",&octal);
    while (octal!=0)
    {
        decimal=decimal+(octal%10)*pow(8,i++);
        octal=octal/10;
    }
    for(i=0;decimal>0;i++)
    {
        a[i]=decimal%2;
        decimal=decimal/2;
    }
    printf("\nBinary Number :");
    for(j = i-1;j>=0;j--)
    {
        printf("%2d", a[j]);
    }
    return 0;
}
