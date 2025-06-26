#include<stdio.h>
main()
{
	int multi,add,sub,division,no1,no2,option;
	do
	{
		printf("\n press 1 for multi");
		printf("\n press 2 for add");
		printf("\n press 3 for sub");
		printf("\n press 4 for division");
		printf("\n press 5 for exit");
		printf("\n enter the option=>");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("\n enter the no=1>");
				scanf("%d",&no1);
				printf("\n enter the no2=>");
				scanf("%d",&no2);
				multi=no1*no2;
				printf("\nmulti=%d",multi);
				break;
			case 2:
				printf("\n enter the no=1>");
				scanf("%d",&no1);
				printf("\n enter the no2=>");
				scanf("%d",&no2);
				add=no1+no2;
				printf("\nadd=%d",add);
				break;
			case 3:
				printf("\n enter the no=1>");
				scanf("%d",&no1);
				printf("\n enter the no2=>");
				scanf("%d",&no2);
				sub=no1-no2;
				printf("\nsub=%d",sub);
				break;
			case 4:
				printf("\n enter the no=>");
				scanf("%d",&no1);
				printf("\n enter the no2=>");
				scanf("%d",&no2);
				division=no1/no2;
				printf("\ndivision=%d",division);
				break;
			case 5:
				printf("\n bye");
				break;
			default:
				printf("\n wrong opt");
		}
	}while(option!=6);
}
