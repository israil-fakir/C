#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter first side:");
    scanf("%d",&side1);
    printf("\nEnter second side:");
    scanf("%d",&side2);
    printf("\nEnter third side:");
    scanf("%d",&side3);
    if(side1==side2 && side2==side3)
    {
        printf("The triangle is Equilateral");
    }
    else if((side1==side2)||(side2==side3) || (side1==side3))
    {
        printf("The triangle is Isosceles");
    }
    else
    {
        printf("The triangle is Scalene");
    }
    return 0;
}
