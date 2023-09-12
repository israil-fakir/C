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
    if(((side2+side3)>side1)&&((side1+side3)>side2)&&((side1+side2>side3)))
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is not valid");
    }
    return 0;
}
