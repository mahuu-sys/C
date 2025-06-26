#include<stdio.h>
main()
{
	int eng,ss,maths,total;
	
	printf("\nEnter marks of english =>");
	scanf("%d",&eng);
	printf("\nEnter marks of ss =>");
	scanf("%d",&ss);
	printf("\nEnter marks of maths =>");
	scanf("%d",&maths);
	total=eng+ss+maths;
	printf("Total of all = %d",total);
}
