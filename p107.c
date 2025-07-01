#include<stdio.h>
main()
{
	int number1,number2;
	printf("\n enter the number1=>");
	scanf("%d",&number1);
	printf("\n enter the number2=>");
	scanf("%d",&number2);
	if(number1%number2==0)
	{
		printf("\n the number1 is divisible by number2");
	}
	else{
		printf("\n the number1 is not divisible by number2");
	}
}
