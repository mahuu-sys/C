#include<stdio.h>
main()
{
	int salary,donation,afterdonation;
	printf("\nenter the salary");
	scanf("%d",&salary);
	printf("enter the donation amt");
	scanf("%d",&donation);
	donation=salary-donation;
	printf("\nafter donation = %d",donation);
}
