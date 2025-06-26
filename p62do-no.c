#include<stdio.h>
main()
{
	int no,i=1,f=1;
	printf("\n enter the limit=>");
	scanf("%d",&no);
	i=1;
	do
	{
	printf(" %d * ",i);
	f=f*i;
	i++;
    }
     while(i<=no);
}
