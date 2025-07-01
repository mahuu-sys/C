#include<stdio.h>
main()
{
	int age;
	printf("\n enter your age=>");
	scanf("%d",&age);
	if(age>0&&age<12)
	{
		printf("\n child");
	}
	else if(age>13&&age<19)
	{
		printf("\n teenager");
	}
	else if (age>20&&age<64)
	{
		printf("\n adult");
	}
	else if (age>65)
	{
		printf("\n senoir");
	}
}	
