#include<stdio.h>
long int multnum(int n);
int main()
{
    int n;
    printf("Enter a number to find factorial:");
    scanf("%d",&n);
    printf("Factorial number = %ld",multnum(n));
    return 0;
}

    long int multnum(int n)
    {
        if (n>=1)
        return n*multnum(n-1);
    else
        return 1;
    }
