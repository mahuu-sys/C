#include<stdio.h>
main()
{
	int a[100]={11,50,7,21,9,6,11,33,44,55,11,2,3};
	int n=13,s=0,c=0;
	int i;
	for(i=0;i<n;i++)
	{
	if(a[i]%2==0)
		{
			s=s+a[i];
			c++;
			printf("\n %d even",a[i]);
		}
	}
	    	printf("\ncount=%d",c);
}
