#include<stdio.h>
main()
{
	int a[100]={11,11,22,10,34,11,20,36,78,98,68,77,33};
	int n=13;
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		printf("\n %d",a[i]+10);
		}
		else
		{
			printf("\n %d",a[i]+20);
		}
	}
}
