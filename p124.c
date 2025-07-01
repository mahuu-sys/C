#include<stdio.h>
main()
{
	int sugarlevel;
	printf("\n enter the sugar level=>");
	scanf("%d",&sugarlevel);
	if(sugarlevel>80&&sugarlevel<100)
	{
		printf("\n sugar is low");
	}
	else if (sugarlevel>100)
	{
		printf("\n sugar is high");
	}
	else
	{
		printf("\n normal");
	}
}
