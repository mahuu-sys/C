#include<stdio.h>
main()
{
	int typing,xerox,option,page;
	do
	{
		printf("\n press 1 for xerox ");
		printf("\n press 2 for typing");
		printf("\n press 3 for exit");
		printf("\n enter the option");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("\n enter the pages for xerox=>");
				scanf("%d",&page);
				xerox=page*3;
				printf("\nbill=%d",xerox);
				break;
			case 2:
				printf("\n enter the pages for typing=>");
				scanf("%d",&page);
				typing=page*5;
				printf("\nbill=%d",typing);
				break;
			case 3:
				printf("\n bye");
				printf("\n your total bill=%d",xerox+typing);
				break;
				default:
					printf("\n wrong opt");
		}
	}while(option!=3);
}
