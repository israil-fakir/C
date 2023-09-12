#include<stdio.h>
int main()
{
    int n,count;
    printf("Enter a value of n:");
    scanf("%d",&n);
    printf("%d Natural number are:\n",n);
    count=1;
    while (count<=n)
    {
        printf("%d\n",count);
        count++;
    }
  return 0;
}
