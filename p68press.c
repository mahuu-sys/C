#include<stdio.h>
main()
{
	int no,square,cube,option;
	do
	{
	printf("\n press 1 for square");
	printf("\n press 2 for cube");
	printf("\n press 3 for exit");
	printf("\n enter the option");
	scanf("%d",&option);
	
	switch(option)
	{
	case 1:
		printf("\n enter the no=>");
		scanf("%d",&no);
		square=no*no;
		printf("\nsquare=%d",square);
		break;
	case 2:	
		printf("\n enter the no=>");
		scanf("%d",&no);
		cube=no*no*no;
		printf("\ncube=%d",cube);
		break;
	case 3:
		printf("\nBye");
		break;
	default:
		printf("\nWrong opt");	
	}	
	}while(option!=3);
	
}
