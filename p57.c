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
		printf("\n the %d is divisble by %d",number1,number2);
	}
	else{
		
		printf("\n the %d is not divisble by %d",number1,number2);
	}
}
 
