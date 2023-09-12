#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
 {
    int n, last, first, temp, swap, count = 0;
    printf("Enter any number to swap: ");
    scanf("%d", &n);
    temp = n;
    last = temp % 10;
    count = (int)log10(temp);
    while(temp>=10)
    {
        temp /= 10;
    }
    first = temp;
    swap = (last * pow(10, count) + first) + (n - (first * pow(10, count) + last));
    printf("%d is swapped to %d\n", n, swap);
    return 0;
}
