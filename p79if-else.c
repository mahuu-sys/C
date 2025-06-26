#include<stdio.h>
void max2()
{
	int a,b;
	printf("\n enter the 2no=>");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("\n a is greater");
	}
	else
	{
		printf("\n b is graeter");
	}
}
void add()
{
	int a,b;
	printf("\n enter 2nos=>");
	scanf("%d %d",&a,&b);
	printf("\nsum=%d",a+b);
}
main()
{
	max2();
	add();
}
