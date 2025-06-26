#include<stdio.h>
main()
{
	char ch;
	printf("\nenter the character=>");
	scanf("%c",&ch);
	if(isupper(ch))
	{
		printf("\n%c",tolower(ch));
	}
	else if(islower(ch))
	{
		printf("\n%c",toupper(ch));
	}
	else
	{
		printf("\n%c",ch);
	}
}

