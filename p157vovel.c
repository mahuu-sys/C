#include<stdio.h>
main()
{
	char ch;
	printf("\nenter character=>");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("\nits a vovel");
	}
	else
	{
		printf("its not vovel");
	}
}
