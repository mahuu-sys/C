#include<stdio.h>
void square()
{
	int no,square;
	printf("\n enter the no1=>");
	scanf("%d",&no);
	square=no*no;
	printf("\nsquare=%d",square);	
}
void cube()
{
	int no,cube;
	printf("\n enter the no1=>");
	scanf("%d",&no);
	cube=no*no*no;
	printf("\ncube=%d",cube);	
}
main()
{
	square();
	cube();
}
