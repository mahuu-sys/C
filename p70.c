#include<stdio.h>
main()
{
	int lenght,breadth;
	printf("\n enter the length=>");
	scanf("%d",&lenght);
	printf("\n enter the breadth=>");
	scanf("%d",&breadth);
	if(lenght==breadth)
	{
		printf("\n its a square");
	}
	else{
		printf("\n its not a square");
	}
}
