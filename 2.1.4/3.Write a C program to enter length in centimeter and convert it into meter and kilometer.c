#include<stdio.h>
int main()
{
 int c,km,m;
 printf("Enter Centimerter length :");
 scanf("%d",&c);
 km=.00001*c;
 printf("\nLength in Kilometer:%d",km);
 m=0.01*c;
 printf("\nLength in Meter:%d",m);
return 0;

}

