#include<stdio.h>
main()
{
	int buyingcost,sellingcost;
	printf("\nenter the buying cost=>");
	scanf("%d",&buyingcost);
	printf("\nenetr the selling cost=>");
	scanf("%d",&sellingcost);
	if(sellingcost>buyingcost)
	{
		printf("\nprofit");
	}
	else{
		printf("\nloss");
	}
}
