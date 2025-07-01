#include<stdio.h>
main()
{
	int year,month;
	printf("\n enter the yaer=>");
	scanf("%d", &year);
	printf("\n enter the month=>");
	scanf("%d",&month);
	if(month==1)
	{
		printf("\nJanuary %d has 31 days",year);
	}
	else if(month==2)
	{
		if(year%4==0)
		{
			printf("\nfebuary %d has 28 days",year);
		}
		else{
			printf("\nfebuary %d has 29 days",year);		
		}
	}
	else if(month==3)
	{
		printf("\nmarch %d has 30 days",year);
	}
	else if(month==4)
	{
		printf("\napril %d has 31 days",year);
	}
	else if(month==5)
	{
		printf("\nmay %d has 30 days",year);
	}
	else if(month==6)
	{
		printf("\nJune %d has 31 days",year);
	}
	else if(month==7)
	{
		printf("\njuly %d has 30 days",year);
	}
	else if(month==8)
	{
		printf("\naugust %d has 31 days",year);
	}
	else if(month==9)
	{
		printf("\nseptember %d has 30 days",year);
	}
	else if(month==10)
	{
		printf("\noctober %d has 31 days",year);
	}
	else if(month==11)
	{
		printf("\nnovember %d has 30 days",year);
	}
	else if(month==12)
	{
		printf("\ndecember %d has 31 days",year);
	}
	else{
		printf("\nWrong month number");
	}
}
