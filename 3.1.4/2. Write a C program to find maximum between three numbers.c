#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three number to find maximum value number:\n");
  scanf("\n%d\n%d\n%d",&a,&b,&c);
  if((b<a)&&(c<a))
  {
      printf("%d is the maximum:",a);
  }
  if((a<b)&&(c<b))
  {
      printf("%d is the maximum:",b);

  }
   if((a<c)&&(b<c))
   {
       printf("%d is the maximum:",c);
   }
   else {
    printf("\nThere are equal value");
   }
    return 0;

}
