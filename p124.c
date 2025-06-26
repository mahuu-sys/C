#include<stdio.h>
main()
{
	int no,i,eno,s=1;
	printf("\n enter the limit=>");
	scanf("%d",&eno);
	for(i=eno;i>=1;i--)
	{
	printf(" %d * ",i);
	s=s*i;
    }
    printf("\n sum=%d",s);
}
