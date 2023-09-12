#include<stdio.h>
#include<ctype.h>
int main()
{
	int newc;
	char c;
	int ctr=0;
	char str[100];
    printf("Enter a string : ");
	fgets(str, sizeof str, stdin);
    printf("Enter a character to replace : ");
	scanf("%c",&c);
	printf("After replacing :\n",c);
	while (str[ctr])
	{
		newc=str[ctr];
		if (isspace(newc))
		newc=c;
		putchar (newc);
		ctr++;
	}
	printf("\n\n");
	return 0;
}
