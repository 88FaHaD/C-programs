// pattern
/*
*
**
***
****
*****
*/
#include<stdio.h>
int main()
{
	int i,j;
	printf("The pattern is \n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
