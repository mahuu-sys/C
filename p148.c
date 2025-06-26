#include<stdio.h>
void add()
{
	int a,b;
	printf("\n enter 2nos=>");
	scanf("%d %d",&a,&b);
	printf("\nsum=%d",a+b);
}
void max2()
{
	int a,b;
	printf("\n enter 2nos=>");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("\n no 1 is greater");
	}
	else
	{
		printf("\n no 2 is greater");
	}
}
void square()
{
	int no,square;
	printf("\n enter the no1=>");
	scanf("%d",&no);
	square=no*no;
	printf("\nsquare=%d",square);	
}
void table()
{
	int i=1,no;
	printf("\n enter the table no=>");
	scanf("%d",&no);
	while(i<=no)
	{
		printf("\n%dX%d=%d",no,i,no*i);
		i++;
	}
}
void oddeven()
{
	int no,i;
	printf("\n enter the no=>");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("\n even");
	}
	else
	{
		printf("\n odd");
	}
}
void posneg()
{
	int no,i;
	printf("\n enter the no=>");
	scanf("%d",&no);
	if(no<0)
	{
		printf("\n neg");
	}
	else
	{
		printf("\n pos");
	}
}
void max3()
{
int a,b,c;
	printf("\n enter 3nos=>");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("\n no 1 is greater");
	}
	else if(a<b&&c<b)
	{
		printf("\n no 2 is greater");
	}
	else 
	{
		printf("\n no 3 is greater");
	}
}
void factor()
{
	int i,no;
	printf("\n enter the limit=>");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		printf("%d *",i);
		i++;
	}
	
}
void areaoftri()
{
	float area,height,base;
	printf("\n enter the height=>");
	scanf("\%d",&height);
	printf("\n enter the base=>");
	scanf("\%d",&height);
	area=height*base*0.5;
	printf("\n area=%2f",area);
}
void circle()
{
	float raidus,area;
	printf("\n enter the raidus=>");
	scanf("\%d",&raidus);
	area=raidus*raidus*3.14;
	printf("\n area=%d",area);
}
main()
{
	add();
	max2();
	square();
	table();
	oddeven();
	posneg();
	max3();
	factor();
	areaoftri();
	circle();
}
