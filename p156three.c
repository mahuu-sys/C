#include<stdio.h>
main()
{
	int one,two,three;
	printf("\nenter the value of one=>");
	scanf("%d",&one);
	printf("\nenter the value of two=>");
	scanf("%d",&two);
	printf("\nenter the value of three=>");
	scanf("%d",&three);
	if (one>two && one>three)
	{
		printf("\nthe one is greater");
	}
	else if(two>one && two>three)
	{
		printf("\nthe two is greater");
	}
	else{
		printf("\nthe three is greater");
        }
}
