#include<stdio.h>
float BD_to_US(float Taka)
{
    float convert;
    convert=Taka/120;
    return convert;
}
int main ()
{
    float Taka,Dollar;
    printf("Input amoumt of Taka:");
    scanf("%f",&Taka);
    Dollar=BD_to_US(Taka);
    printf("The Dollar is: %f $",Dollar);

}
