#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character to check Vowel or consonant:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        printf("Vowel");
        break;
        case 'e':
        printf("Vowel");
        break;
        case 'i':
        printf("Vowel");
        break;
        case 'o':
        printf("Vowel");
        break;
        case 'u':
        printf("Vowel");
        break;
        case 'A':
        printf("Vowel");
        break;
        case 'E':
        printf("Vowel");
        break;
        case 'O':
        printf("Vowel");
        break;
        case 'U':
        default:
        printf("Consonanat");

    }
    return 0;
}
