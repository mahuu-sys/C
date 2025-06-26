#include<stdio.h>
main()
{
	int no,eno,i=1,f=1;
	printf("\n enter the limit=>");
	scanf("%d",&eno);
	
	i=eno;
	while(i>=1)
	{
	printf(" %d * ",i);
	f=f*i;
	i--;
    }
	printf("\n sum=%d",f);
    
}
