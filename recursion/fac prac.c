#include<stdio.h>
int factorial(int);
int main()
{
	int x,ans;
	printf("Enter a integer");
	scanf("%d",&x);
	ans=factorial(x);
	printf("Factorial of %d is%d",x,ans);
}
int factorial(int z)
{
	if(z>1)
	return z*factorial(z-1);
	else
	return 1;
}
