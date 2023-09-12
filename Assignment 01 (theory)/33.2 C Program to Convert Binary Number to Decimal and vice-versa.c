#include <stdio.h>
int main()
{
    int a[10], n, i, j;
    printf("Decimal Number:");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("\n Binary Number :");
    for(j = i-1;j>=0;j--)
    {
        printf("%2d", a[j]);
    }
    printf("\n");
    return 0;
}
