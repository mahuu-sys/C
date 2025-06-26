#include<stdio.h>
main()
{
	int number;
	printf("\n enter the number=>");
	scanf("%d",number);
	if(number%2==1)
	{
		printf("\nweird");
	}
	else {
	
		if(number>=2 && number<=5)
		{
			printf("\n not weird");
		}
		else if(number>=6 && number<=20)
		{
			printf("\n weird");
		}
		else if(number<20)
		{
			printf("\n not weird");
		}
	}
}
