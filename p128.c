#include<stdio.h>
main()
{
	int no,i=0;
	printf("\n enter the limit=>"),
	scanf("%d",&no);
	i=1;
	while(i<=no)
	
		if(i%2==0)
	{
		printf("\n %d even",i);
		i++;
	}
	else
		{
			printf("\n %d odd",i);
			i++;
		}
}

