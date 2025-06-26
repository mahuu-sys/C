#include<stdio.h>
main()
{
	char ch;
	printf("\nenter the character=>");
	scanf("%c",&ch);
	if(ch=='a'||ch=='A')
	{
		printf("\n alligator");
	}
	else if(ch=='b'||ch=='B')
	{
		printf("\n basketball");
	}
	else if(ch=='c'||ch=='C')
	{
		printf("\n cricket");
	}
	else if(ch=='d'||ch=='D')
	{
		printf("\n dinasour");
	}
	else if(ch=='e'||ch=='E')
	{
		printf("\n elephant");
	}
	else
	{
		printf("\n not have time");
	}
}
