#include<stdio.h>
main()
{ 
    int service,bonus,salary;
	printf("\n enter total service year=>");
	scanf("%d",&service);
	printf("\n enter the salary=>");
	scanf("%d",&salary);
	if(service>5)
	{
		bonus=salary*0.5;
		printf("\n bonus=%d",bonus);
	}
	else{
		printf("\n work for more year");
	} 
	 
}
