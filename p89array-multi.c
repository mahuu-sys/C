#include<stdio.h>
main()
{
	int a[100]={11,50,7,21,9,6,11,33,44,55,11,2,3};
	int n=13,s;
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n %d %d",a[i],a[i]*a[i]);
		s=i*i;
	}
}
