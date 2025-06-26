#include<stdio.h>
void add()
{
	int a,b;
	printf("\n enter 2nos=>");
	scanf("%d %d",&a,&b);
	printf("\nsum=%d",a+b);
}
void minus()
{
	int a,b;
	printf("\n enter 2nos=>");
	scanf("%d %d",&a,&b);
	printf("\nminus=%d",a-b);
}
void multi()
{
	int a,b;
	printf("\n enter 2nos=>");
	scanf("%d %d",&a,&b);
	printf("\nmulti=%d",a*b);
}
void div()
{
	int a,b;
	printf("\n enter 2nos=>");
	scanf("%d %d",&a,&b);
	printf("\ndiv=%d",a/b);
}
main()
{
	add();
	minus();
	multi();
	div();
}

