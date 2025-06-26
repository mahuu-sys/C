#include<stdio.h>
main()
{
	int eno,i;
	printf("\n enter the limit=>");
	scanf("%d",&eno);
	for(i=2;i>=eno;i=i+2)
	{
	printf(" %d  ",i);
    }
}
