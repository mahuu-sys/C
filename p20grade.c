#include<stdio.h>
main()
{
	int maths,eng,sci,total;
	printf("\nmarks obtained in maths=>");
	scanf("%d",&maths);
	printf("\nmarks obtained in sci=>");
	scanf("%d",&sci);
	printf("\nmarks obtained in eng=>");
	scanf("%d",&eng);
	total=maths+eng+sci;
	
	if(total>0 && total<50)
    {
    	printf("\nc grade");
	}
	else if(total>50&&total<100)
	{
		printf("\nb grade");
	}
	else
	{
		printf("\na grade");
	}
}
