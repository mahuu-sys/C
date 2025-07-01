#include<stdio.h>
main()
{
	float bmi;
	float total;
	printf("\n enter bmi=>");
	scanf("%f",&bmi);
	if(bmi>30)
	{
		printf("\n obese");
	}
    if(bmi>25&&bmi<29.9)
	{
		printf("\n overweight");
	}
	
	if(bmi>18.5&&bmi<24.9)
	{
		printf("\n normal");
	}
	else if(bmi<18.5)
	{
		printf("\n underweight");
	}
	
}
