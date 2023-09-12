#include<stdio.h>

float usdtotaka(float taka,float usd_rate)
{
    float x ;
    x= taka*usd_rate;
    return x;
}
int main()
{
    float usd_rate =94;
    float tk,y;
    printf ("Enter the USR to convert TAKA:");
    scanf("%f",&tk);
    y= usdtotaka(tk,usd_rate);
    printf("%.2f",y);
//    returm 0;

}
