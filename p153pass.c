#include<stdio.h>
main()
{
	int maths,eng,sci,total;
	printf("\nenter the marks of maths=>");
	scanf("%d",&maths);
	printf("\nenter the marks of eng=>");
	scanf("%d",&eng);
	printf("\nenetr the marks of sci=>");
	scanf("%d",&sci);
	total=eng+sci+maths;
	if(total>50)
	{
		printf("\nyou are passed");
	}
	else{
		printf("\n you are fail");
	}
}
