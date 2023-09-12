#include<stdio.h>
struct temp
{
    float c;
    float f;
};
struct temp var1,var2;
int main()
{
    printf("Enter the Celsius :");
    scanf("%f",&var1.c);
    var2.f=(var1.c*9/5)+32;
    printf("In Fahrenheit :%.2f",var2.f);

    return 0;
}
