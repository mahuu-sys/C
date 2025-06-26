#include<stdio.h>
void square(int no)
{
	printf("\nsquare=%d",no*no);	
}
void cube(int no)
{
	
	printf("\ncube=%d",no*no*no);
}
main()
{
	int no;
	printf("\n enter the no1=>");
	scanf("%d",&no);
	square(no);
	cube(no);
}
