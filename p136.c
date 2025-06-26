#include<stdio.h>
main()
{
	int no,eno,i=1;
	printf("\n enter the limit=>");
	scanf("%d",&eno);
	
	i=eno;
	do
	{
	printf(" %d * ",i);
	i--;
    }
    while(i>=1);
}
