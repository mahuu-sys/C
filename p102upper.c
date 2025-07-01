#include<stdio.h>
main()
{
	char ch;
	printf("\nenter the character=>");
	scanf("%c",&ch);
	if(isupper(ch))
	{
		printf("\n upper case");
	}
	else if(islower(ch))
	{
		printf("\n lower case");
	}
	else
	{
		printf("\n other case");
	}
}
