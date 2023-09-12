#include<stdio.h>
int main()
{
    int x,num,rem,rev=0;
    printf("Enter a integer:");
    scanf("%d",&num);
    x=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    if(x==rev)
    {
        printf("Palindrome");
    }
    else
    {
      printf("Not Palindrome");
    }

    return 0;
}
