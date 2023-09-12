#include<stdio.h>
float bantousd(float btaka)
{
    float usd;
    usd=btaka/120;
    return usd;
}
int main()
{
    float taka,doller;
    printf("Enter taka to converter USD:");
    scanf("%f",&taka);
    doller=bantousd(taka);
    printf("In USD :%.2f",doller);

}
