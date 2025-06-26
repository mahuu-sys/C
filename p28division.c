 #include<stdio.h>
main()
{
	int no,i,divino;
	printf("\n enter the limit=>");
	scanf("%d",&no);
	printf("\n enter the divino=>");
	scanf("%d",&divino);
	for(i=1;i<=no;i++)
	{
	if(i%divino==0)
	{
		printf("\n%d",i);
	}		
   }
}
