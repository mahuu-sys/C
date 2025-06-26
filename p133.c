#include<stdio.h>
main()
{
	int no,i=1,f=1;
	printf("\n enter the limit=>");
	scanf("%d",&no);
	while(i<=no)
	{
	printf(" %d * ",i);
	f=f*i;
	i++;
    }
     printf("\n sum=%d",f);
}
