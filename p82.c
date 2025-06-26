#include<stdio.h>
main()
{
	int no1,option,c,s,no2;
	printf("\n press 1 for square=>");
	printf("\n press 2 for cube=>");
	printf("\n enter the option=>");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			printf("\n enter the no1=>");
			scanf("%d",&no1);
			s=no1*no1;
			printf("\n square=%d",s);
			break;
		case 2:
			printf("\n enter the no1=>");
			scanf("%d",&no1);
			c=no1*no1*no1;
			printf("\n cube=%d",c);
			break;
		default:
			printf("\n wrong option");
	}
}
