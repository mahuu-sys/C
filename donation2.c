#include<stdio.h>
main()
{
	int salary,donation,afterdonation;
	printf("\neneter the salary");
	scanf("%d",&salary);
	donation=salary*0.10;
	printf("\ndonation=%d",donation);
	salary=salary-donation;
	printf("\nAfter donation salary = %d",salary);
}
