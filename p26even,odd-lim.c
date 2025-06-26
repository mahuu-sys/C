#include<stdio.h>
main()
{
	int no,i;
	printf("\n enter the limit=>");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
	if(i%2==0)
	{		
	   printf("\n %d even",i);
     
	}
	else{
		printf("\n %d odd",i);
	}
	}

}
