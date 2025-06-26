#include<stdio.h>
main()
{
	float no,i,s=0;
	printf("\n enter the limit=>");
	scanf("%f",&no);
	for(i=1;i<=no;i++)
	{
		printf(" 1/%.f+  ",i);
		s=1/i;
    }
    printf("\n sum=%2f",s);
}
