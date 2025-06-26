#include<stdio.h>
main()
{
	int no,i,s=0;
	printf("\n enter the limit");
	scanf("%d",&no);
	for(i=1;i<+no;i++)
	{
		printf("%d ",i+i);
		s=s+i+i;
	}
	printf("\n sum +%d",s);
}
