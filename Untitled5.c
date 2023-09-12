#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two number to sub :\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        c=a-b;
    }
    else
    {
        c=b-a;
    }
    printf("\n%d",c);
    return 0;
}
