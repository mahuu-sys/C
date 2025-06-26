#include<stdio.h>
main()
{
	int no,i=1;
	printf("\n enter the no=>"),
	scanf("%d",&no);
	i=no;
	do
	{
		printf("\n%d X %d = %d",no,i,no*i);
		i++;
	}
	 while(i>=1);
}
