// input matrix
#include<stdio.h>
int main()
{
	int a[4][3];
	int i,j;
	printf("enter the elements of 4x3 matrix");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    printf("\n the elements of the matrix are \n");
    	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		
	
}
