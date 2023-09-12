#include<stdio.h>
int main()
{
    float usd,ta;
    printf("Enter the usd:");
    scanf("%f",&usd);
    ta=banglatousd(usd);
    printf("In USD:",ta);

}
float banglatousd(float taka)
{
    float us;
    us=taka/120;
    return us;
}
