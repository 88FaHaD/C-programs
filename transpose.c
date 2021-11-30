// transpose of matrix
#include<stdio.h>
int main()
{
	int a[10][10], b[10][10];
	int i,j,m,n;
	printf("Enter the size of matrix");
	scanf("%d%d",&m,&n);
	printf("enter the elements of the matrix ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("elements before transpose \n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	// transpose
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    			b[j][i]=a[i][j];
		}
	}
	printf("\n the transpose is \n ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
		

}

