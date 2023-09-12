#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,c,d;
   float x1,x2;
    printf("Input the value of a,b & c :\n ");
   scanf("%d%d%d",&a,&b,&c);
   d=b*b-4*a*c;
   if(d==0)
   {
     printf("Enter the roots\n");
     x1=-b/(2.0*a);
     x2=x1;
     printf("1st  root = %f\n",x1);
     printf("2nd root= %f\n",x2);
   }
   else if(d>0)
	{
	   x1=(-b+sqrt(d))/(2*a);
	   x2=(-b-sqrt(d))/(2*a);
	   printf("1st  root = %f\n",x1);
	   printf("2nd root= %f\n",x2);
	}
	else
	    printf("Root are imeainary;\nNo Solution.");
return 0;
}
