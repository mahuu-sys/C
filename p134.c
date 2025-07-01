#include<stdio.h>
main()
{
	int no1,no2,option,add,sub;
	printf("\n press 1 for add=>");
	printf("\n press 2 for sub=>");
	printf("\n enter the option=>");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			printf("\n enter the no1=>");
			scanf("%d",&no1);
			printf("\n enter the no2=>");
			scanf("%d",&no2);
			add=no1+no2;
			printf("\n add=%d",add);
			break;
		case 2:
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
