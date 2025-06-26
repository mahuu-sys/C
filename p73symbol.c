#include<stdio.h>
main()
{
	int add,sub,div,mult,no1,no2;
	char option;
	do
	{
	printf("\n press + for add");
	printf("\n press - for sub");
	printf("\n press / for div");
	printf("\n press * for mult");
	printf("\n press e for exit");
	printf("\n enter the option=>");
	
	fflush(stdin);
	scanf("%c",&option);
	
	switch(option)
	{
		case '+':
		printf("\n enter the no1=>");
		scanf("%d",&no1);
		printf("\n enter the no2=>");
		scanf("%d",&no2);
		add=no1+no2;
		printf("\nadd=%d",add);
		break;
	case '-':	
		printf("\n enter the no1=>");
		scanf("%d",&no1);
		printf("\n enter the no2=>");
		scanf("%d",&no2);
		sub=no1-no2;
		printf("\nsub=%d",sub);
		break;
		case '/':
		printf("\n enter the no1=>");
		scanf("%d",&no1);
		printf("\n enter the no2=>");
		scanf("%d",&no2);
		div=no1/no2;
		printf("\div=%d",div);
		break;
		case '*':
		printf("\n enter the no1=>");
		scanf("%d",&no1);
		printf("\n enter the no2=>");
		scanf("%d",&no2);
		add=no1*no2;
		printf("\nmult=%d",mult);
		break;
	case 'e':
		printf("\nBye");
		break;
	default:
		printf("\nWrong opt");	
	}	
	}while(option!='e');
	
}
