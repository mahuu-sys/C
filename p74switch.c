#include<stdio.h>
main()
{
	int pizza=0,pasta=0,burger=0,dosa=0,qty;
	char option;
	do
	{
	printf("\n press p for pizza");
	printf("\n press pa for pasta");
	printf("\n press b for burger");
	printf("\n press d for dosa");
	printf("\n enter e for exit");
	printf("\n enter the option=>");

	fflush(stdin);
	scanf("%c",&option);
	switch(option)
	{
		case 'p':
			printf("\n price of pizza is 200");
			printf("\n enter the quantity=>");
			scanf("%d",&qty);
			pizza=qty*200;
			printf("\n your bill=%d",pizza);	
			break;
		case 'pa':
			printf("\n price of pasta is 140");
			printf("\n enter the quantity=>");
			scanf("%d",&qty);
			pasta=qty*140;
			printf("\n your bill=%d",pasta);
			break;
		case 'b':
			printf("\n price of burger is 90");
			printf("\n enter the quantity=>");
		    scanf("%d",&qty);
		    burger=qty*90;
			printf("\n your bill=%d",burger);
			break;
		case 'd':
			printf("\n price of dosa is 100");
			printf("\n enter the quantity=>");
			scanf("%d",&qty);
			dosa=qty*100;
			printf("\n your bill=%d",dosa);
			break;
		case 'e':
			printf("\n bye");
			printf("\nYour Total bill %d",pizza+dosa+pasta+burger);
			break;
		default:
			printf("\n wrong opt");
	}
	}while(option!=5);
}

