#include<stdio.h>
main()
{
	float classes,attend;
	float total;
	printf("\n no of classes held=>");
	scanf("%f",&classes);
	printf("\n no of classes attend=>");
	scanf("%f",&attend);
	total=(attend/(classes))*100;
	printf("\n%.2f",total);
	if(total>75)
	{
	printf("\n you can give exam");
	}
	else{
	printf("\n you can't sit in exam");
	}	
}
