#include<stdio.h>
main()
{
	int a[100]={11,11,22,10,34,11,20,36,78,98,68,77,33};
	int n=13,c=0;
	int i,search;
	printf("\n search=>");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
	if(a[i]==search)
	{
		c++;
	}
    }
	if(c==0)
	{
		printf("\n not found");
	}
	else{
		printf("\n %d times",c);
	}
}

