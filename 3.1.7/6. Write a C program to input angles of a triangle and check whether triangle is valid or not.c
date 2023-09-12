#include<stdio.h>
int main()
{
    int x,y,z,sum;
    printf("Enter a first angles:");
    scanf("%d",&x);
    printf("\nEnter a second angles:");
    scanf("%d",&y);
    printf("\nEnter third:");
    scanf("%d",&z);
    sum=x+y+z;
    if(sum==180 && x>0 && y>0 && z>0)
    {
        printf("The triangle is valid");
    }
    else
    {
       printf("The triangle is not valid");
    }
    return 0;
}
