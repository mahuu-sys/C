#include<stdio.h>
main()
{
	char ch;
	int qty;
	printf("\nWelcome to Khushi Resturant");
	printf("\nPress p for Pizza");
	printf("\nPress b for Burger");
	printf("\nPress d for Dhosa");
	printf("\nenter the option =>");
	scanf("\%c",&ch);
	if(ch=='p'||ch=='P')
	{
		printf("\n pizza price is 200");
		printf("\nEnter qty =>");
		scanf("%d",&qty);
		printf("\nYour Pizza bill = %d",qty*200);
	}
	else if(ch=='b'||ch=='B')
	{
		printf("\n burger price is 90");
		printf("\nEnter the qty=>");
		scanf("\n%d",qty);
		printf("\nYour burger bill=%d",qty*90);
	}
	else if(ch=='d'||ch=='D')
	{
		printf("\ndosa price is 100");
		printf("\nEnter qty");
		scanf("\n%d",qty);
		printf("\nYour dosa bill=%d",qty*100);
    }
	else
	{
		printf("\n we dont serve");
	}
}
