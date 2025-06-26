#include<stdio.h>
main()
{
	int m,t,w,th,f,s,su,total;
	printf("\nenter temprature of monday =>");
	scanf("%d",&m);
	printf("\nenter temprature of tuesday");
	scanf("%d",&t);
	printf("\nenter temprature of wednesday");
	scanf("%d",&w);
	printf("\nenter temprature of thrusday");
	scanf("%d",&th);
	printf("\nenter temprature of friday");
	scanf("%d",&f);
	printf("\nenter temprature of saturday");
	scanf("%d",&s);
	printf("\nenter temprature of sunday");
	scanf("%d",&su);
	
	total=m+t+w+th+f+s+su;
	
	printf("\nTotal = %d",total);
}

