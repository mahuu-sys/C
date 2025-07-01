#include<stdio.h>
main()
{
	int no1,no2,add,sub;
	char option;
	printf("\n press + for add=>");
	printf("\n press - for sub=>");
	printf("\n enter the option=>");
	scanf("%c",&option);
	switch(option)
	{
		case '+':
			printf("\n enter the no1=>");
			scanf("%d",&no1);
			printf("\n enter the no2=>");
			scanf("%d",&no2);
			add=no1+no2;
			printf("\n add=%d",add);
			break;
		case '-':
			printf("\n enter the no1=>");
			scanf("%d",&no1);
			printf("\n enter the no2=>");
			scanf("%d",&no2);
			sub=no1-no2;
			printf("\n sub=%d",sub);
			break;
		default:
			printf("\n wrong option");
	}
}
