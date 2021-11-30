//scan an array an print the same
#include<stdio.h>
int main()
{
	int a[50];
	int i,n;
	printf("Enter the size of array ");
	scanf("%d",&n);
	printf("Enter the elements inside the array ");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 	printf("The elements inside the array are ");
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	 } 
}
