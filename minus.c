#include<stdio.h>
main()
{
	char ch;
	printf("\nenter the operator=>");
	scanf("%c",&ch);
	if(ch=='+')
	{
		printf("\n addition");
	}
	else if(ch=='-')
	{
		printf("\n minus");
	}
	else if (ch=='/')
	{
		printf("\n division");
	}
	else if(ch=='*')
	{
		printf("\n multiplication");
	}
	else
	{
		printf("\n other character");
	}
}
