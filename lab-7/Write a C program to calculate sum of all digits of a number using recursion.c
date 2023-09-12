#include <stdio.h>
int sumofdig(int num);
int main()
{
    int num,sum;
    printf("Enter a number to find sum of digits: ");
    scanf("%d", &num);
    sum = sumofdig(num);
    printf("Sum of digits of %d = %d", num, sum);
    return 0;
}
int sumofdig(int num)
{
    if(num == 0)
    return 0;
    return ((num % 10) + sumofdig(num / 10));
}
