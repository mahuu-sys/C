#include<stdio.h>
main()
{
	char letter;
	printf("\n enter the letter=>");
	scanf("%c",&letter);
	switch(letter)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("\n its a voveL");
			break;
		default:
			printf("\n wrong option");
	}
}
