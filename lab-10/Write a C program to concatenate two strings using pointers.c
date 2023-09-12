#include <stdio.h>
int main()
{
 char arr[100], brr[100];
 printf("Enter the 1st string: ");
 gets(arr);
 printf("Enter the 2nd string: ");
 gets(brr);
 char *a = arr;
 char *b = brr;
 while(*a)
 {
    a++;
 }
 while(*b)
 {
    *a = *b;
    b++;
    a++;
 }
    *a = '\0';
    printf("concatenation : %s",arr);
    return 0;
}
