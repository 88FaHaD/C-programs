// bubble sort function
#include<stdio.h>
void bsort(int [],int);
int main()
{
	int a[100];
	int n,i;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements inside the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\n Elements before sorting the  array");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		
	}
	bsort(a,n);
}



void bsort(int x[],int s)
{
	int i,j,temp;
	for(i=0;i<s-1;i++)
	{
		for(j=0;j<s-1;j++)
		{
			if(x[j] > x[j+1])
		  {
		  		temp=x[j];
			x[j]=x[j+1];
			x[j+1]=temp;
		  }
		}
	}
	printf("\n elements after sorting the array ");
	for(i=0;i<s;i++)
	{
		printf("%d ",x[i]);
	}
}
