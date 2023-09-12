#include <stdio.h>
#include <math.h>
long dectobin(int dec)
{
    long bin = 0;
    int rem, temp = 1;
    while (dec!=0)
    {
        rem = dec%2;
        dec = dec / 2;
        bin = bin + rem*temp;
        temp = temp * 10;
    }
    return bin;
}

int main()
{
    int dec;
    printf("Enter a Decimal Number to convert binary number: ");
    scanf("%d", &dec);
    printf("In Binary Number : %ld", dectobin(dec));
    return 0;
}
