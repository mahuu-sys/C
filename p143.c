#include<stdio.h>
main()
{
	int pizza=0,pasta=0,burger=0,dosa=0,option;
	int qty;
	do
	{
	printf("\n press 1 for pizza");
	printf("\n press 2 for pasta");
	printf("\n press 3 for burger");
	printf("\n press 4 for dosa");
	printf("\n enter 5 for exit");
	printf("\n enter the option=>");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			printf("\n price of pizza is 200");
			printf("\n enter the quantity=>");
			scanf("%d",&qty);
			pizza=qty*200;
			printf("\n your bill=%d",pizza);	
			break;
		case 2:
			printf("\n price of pasta is 140");
			printf("\n enter the quantity=>");
			scanf("%d",&qty);
			pasta=qty*140;
			printf("\n your bill=%d",pasta);
			break;
		case 3:
			printf("\n price of burger is 90");
			printf("\n enter the quantity=>");
		    scanf("%d",&qty);
		    burger=qty*90;
			printf("\n your bill=%d",burger);
			break;
		case 4:
			printf("\n price of dosa is 100");
			printf("\n enter the quantity=>");
			scanf("%d",&qty);
			dosa=qty*100;
			printf("\n your bill=%d",dosa);
			break;
		case 5:
			printf("\n bye");
			printf("\nYour Total bill %d",pizza+dosa+pasta+burger);
			break;
		default:
			printf("\n wrong opt");
	}
	}while(option!=5);
}
