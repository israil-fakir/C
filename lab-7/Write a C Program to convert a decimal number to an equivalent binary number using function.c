#include <stdio.h>
long decToBin(int decimalnumber)
{
    long binarynumber = 0;
    int rem, temp = 1;
    while (decimalnumber!=0)
    {
        rem = decimalnumber%2;
        decimalnumber = decimalnumber / 2;
        binarynumber = binarynumber + rem*temp;
        temp = temp * 10;
    }
    return binarynumber;
}
int main()
{
    int decimalnumber;
    printf("Enter a Decimal Number to convert into Binary: ");
    scanf("%d", &decimalnumber);
    printf("Equivalent Binary Number is: %ld", decToBin(decimalnumber));
    return 0;
}
