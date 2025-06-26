#include<stdio.h>
main()
{
	int no,i,m=1;
	printf("\n enter the limit=>");
	scanf("%d",&no);
	for(i=1;i<+no;i++)
	{
		printf("%d* ",i);
		m=m*i;
	}
	printf("\n multi= %d",m);
}
