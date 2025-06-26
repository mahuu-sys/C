#include<stdio.h>
main()
{
	int no,i;
	printf("\n enter the limit=>");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		printf("%d + ",i*i);
	}
}

