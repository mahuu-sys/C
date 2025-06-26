#include<stdio.h>
main()
{
	int no1,option,s,c;
	printf("\n press 1 for square");
	printf("\n press 2 for cube");
	printf("\n enter option=>");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
		printf("\nenter the no1=>");
		scanf("%d",&s);
		s=no1*no1;
		print("\n square=%d",s);
		break;
		case 2:
		printf("\n enter the no1");
		scanf("%d",c);
		c=no1*no1*no1;
		printf("\n cube=%d",c);
		break;
	}	
}
