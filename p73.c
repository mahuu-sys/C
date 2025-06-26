#include<stdio.h>
main()
{
	int worker,age;
	char gen;
	printf("\n enter your age =>");
	scanf("%d",&age);
	
	fflush(stdin);
	printf("\n enter your gender('m','f') =>");
	scanf("%c",&gen);
	
	if(gen=='f')
	{
		printf("\n work in urban area");
	}
	else if(gen=='m')
	{
		if(age>20)
		{
			printf("\n he may can work anywhere");
		}
		else if (age<40)
		{
			printf("\n he will work in urban area");
		}
			
		}
	}
