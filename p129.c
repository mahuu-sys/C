#include<stdio.h>
main()
{
	int no,i=1;
	printf("\n enter the no=>"),
	scanf("%d",&no);
	i=1;
	while(i<=10)
	{
		printf("\n%d X %d = %d",no,i,no*i);
		i++;
	}
}
