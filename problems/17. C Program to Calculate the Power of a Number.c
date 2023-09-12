#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the base :");
    scanf("%d",&a);
    printf("Enter the power:");
    scanf("%d",&b);
    c=pow(a,b);
    printf("%d^%d=%d",a,b,c);
    return 0;
}
