#include<stdio.h>
main()
{
	char ch;
	int s,c,n;
	printf("\n press s for square");
	printf("\n press c for cube");
	printf("\n enter the option=>");
	scanf("%c",&ch);
	if(ch=='s'||ch=='S')
	{
		printf("\nenter no =>");
		scanf("%d",&n);
		s=n*n;
		printf("\nsquare=%d",s);
	}
	else if(ch='c'||ch=='C')
	{
	
		printf("\nenter the no=>");
		scanf("%d",&n);
		c=n*n*n;
		printf("\ncube=%d",c);
	
	}
}
