// factorial of a number
#include <stdio.h>
int main()
{
	int n,i,f=1;
	printf("Enter a number ");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		f=f * n ;
	}
	printf("The factorial of %d is %d",n,f);
}
