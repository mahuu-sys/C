#include<stdio.h>
main()
{
	int a[100]={11,50,7,21,9,6,11,33,44,55,11,2,3};
	int n=13,s,s1=0,c1=0,s2=0,c2=0;
	int i;
	for(i=0;i<n;i++)
	{
	if(a[i]%2==0)
		{
			printf("\n %d even",a[i]);
			s1=s1+a[i];
			c1++;
		}
	else
        { 
        	printf("\n %d odd",a[i]);
        	s2=s2+a[i];
        	c2++;
		}	
    }
    printf("\nsum even=%d",s1);
    printf("\ncount even=%d",c1);
    printf("\nsum odd=%d",s2);
    printf("\ncount odd=%d",c2);
}
