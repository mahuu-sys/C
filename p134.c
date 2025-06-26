#include<stdio.h>
main()
{
	int i,no;
	printf("\n limit no=>");
	scanf("%d",&no);
	i=1;
	do
	{
		printf("\n%d",i);
		i++;	
	}
	while(i<=no);
}
