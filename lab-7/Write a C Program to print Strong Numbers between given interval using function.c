#include <stdio.h>
long long fact(int num);
void printstrnum(int first, int last);
int main()
{
    int first,last;
    printf("Enter the lower number to find strong number: ");
    scanf("%d", &first);
    printf("Enter the upper number to find strong number: ");
    scanf("%d", &last);
    printf("Strong numbers between %d to %d are: ", first, last);
    printstrnum(first, last);
return 0;
}
void printstrnum(int first, int last)
{
    long long sum;
    int num;
    while(first != last)
    {
        sum = 0;
        num = first;
        while(num != 0)
        {
            sum += fact(num % 10);
            num /= 10;
        }
        if(first == sum)
        {
            printf("%d, ", first);
        }
        first++;
    }
}
long long fact(int num)
{
    if(num == 0)
        return 1;
    else
        return (num * fact(num-1));
}
