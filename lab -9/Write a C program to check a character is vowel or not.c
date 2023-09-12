#include<stdio.h>
struct check
{
    char c;
};
struct check var;
int main()
 {
     int uper,lower;
     printf("Enter a character to check vowel or consonant:");
     scanf("%c",&var.c);
     lower=(var.c=='a'||var.c=='e'||var.c=='i'||var.c=='o'||var.c=='u');
     uper=(var.c=='A'||var.c=='E'||var.c=='I'||var.c=='O'||var.c=='U');
     if(lower || uper)
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
     return 0;
 }
