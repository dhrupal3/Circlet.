#include<stdio.h>

main()
{
	int i,j,a=2;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%a==1)
			printf("1");
			else
			printf("0");
		}
		printf("\n");
	}
}
