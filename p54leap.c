#include<stdio.h>
main()
{
	int year;
	printf("\n enter the year=>");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("\n its leap year");
	}
	else{
		printf("\n its not leap year");
	}
}
