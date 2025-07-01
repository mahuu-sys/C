#include<stdio.h>
void max2(int a,int b)
{
	if(a>b)
	{
		printf("\n a is greater");
	}
	else
	{
		printf("\n b is graeter");
	}
}
void add(int a,int b)
{
   printf("\nsum=%d",a+b);
}
main()
{
	int a,b;
	printf("\n enter the 2no=>");
	scanf("%d %d",&a,&b);
	max2(a,b);
	add(a,b);
}
