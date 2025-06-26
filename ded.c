#include<stdio.h>
main()
{
	int salary,dedection,total;
	printf("\nenter the salary<");
	scanf("%d",&salary);
	dedection=salary*0.50;
	printf("\nafter the dedection=%d",dedection);
	salary=salary-dedection;
	printf("\nsalary after dedection=%d",dedection);
	
}

