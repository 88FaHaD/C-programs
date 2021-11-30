// sum of n natural numbers 
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("The sum is %d",sum);
}
