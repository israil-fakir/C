#include<stdio.h>
char checker(char ch)
{
 //checker(ch)
if (ch=('a'|| 'e'))
return printf("Voael");
else
return printf("COnt");
}

int main()
{
    char x;
    printf("Enter ");
    scanf("%c",&x);
    checker(x);
}
