#include<stdio.h>
main()
{
	int age;
	printf("\n enter your age=>");
	scanf("%d",&age);
	if(age>18)
	{
		printf("\n you are eligible to vote");
	}
	else{
		printf("\n sorry you are not eligible");
	}
}
