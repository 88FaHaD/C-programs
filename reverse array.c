// reverse an array 
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int i;
	printf("Elements in reverse order ");
	for(i=4;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}
