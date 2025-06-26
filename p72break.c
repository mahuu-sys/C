#include<stdio.h>
main()
{
	char no,square,cube,option,ch;
	do
	{
	printf("\n press s for square");
	printf("\n press c for cube");
	printf("\n press e for exit");
	printf("\n enter the option=>");
	fflush(stdin);
	scanf("%c",&option);
	
	switch(option)
	{
	case 's':
	case 'S':
		printf("\n enter the no=>");
		scanf("%d",&no);
		square=no*no;
		printf("\nsquare=%d",square);
		break;
	case'c':
	case'C':
		printf("\n enter the no=>");
		scanf("%d",&no);
		cube=no*no*no;
		printf("\ncube=%d",cube);
		break;
	case 'e':
	case 'E':
		printf("\nBye");
		break;
	default:
		printf("\nWrong opt");	
	}	
	}while(option!='e');
	
}
