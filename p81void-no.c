#include<stdio.h>
void add(int a,int b)
{
	printf("\nsum=%d",a+b);
}
void minus(int a,int b)
{
	
	printf("\nminus=%d",a-b);
}
void multi(int a,int b)
{
	
	printf("\nmulti=%d",a*b);
}
void div(int a,int b)
{
	
	printf("\ndiv=%d",a/b);
}
main()
{
    int a,b;
	printf("\n enter the no2=>");
	scanf("%d %d",&a,&b);
	add(a,b);
	minus(a,b);
	multi(a,b);
	div(a,b);
}

