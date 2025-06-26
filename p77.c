#include<stdio.h>
main()
{
	int dayno;
	printf("\n enter dayno=>");
	scanf("%d",&dayno);
	switch(dayno)
	{
		case 1:
			printf("\n monday");
			break;
			case 2:
			printf("\n tuesday");
			break;
			case 3:
			printf("\n wednesday");
			break;
			case 4:
			printf("\n thrusday");
			break;
			case 5:
			printf("\n friday");
			break;
			case 6:
			printf("\n saturday");
			break;
			case 7:
			printf("\n sunday");
			break;
		default:
		    printf("\n wrong opt");
	}
}
