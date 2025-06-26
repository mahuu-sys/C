#include<stdio.h>
main()
{
	int number1,number2;
	printf("\n enter the number1=>");
	scanf("%d",&number1);
	printf("\n enter the number2=>");
	scanf("%d",&number2);

	if(number1+number2>50)
	{
		printf("\nMulti = %d",number1*number2);		
	}
	else
	{
		printf("\nAdd = %d",number1+number2);				
	}
}
