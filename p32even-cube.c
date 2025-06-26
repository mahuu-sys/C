#include<stdio.h>
main()
{
	int no,i;
	printf("\n enter the limit=>");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	if(i%2==0)
	{
		printf("%d ",i*i);
	}
	else{
		printf("%d ",i*i*i);
	}
}
