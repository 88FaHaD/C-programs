// recursion :- when a function calls itself it is called recursion  and that function which calls itself is called recursive function
// finding factorial of a number using recursion
#include<stdio.h>
int factorial(int);
int main()
{
	int x,ans;
	printf("Enter the nmber");
	scanf("%d",&x);
	ans= factorial(x);
	printf("Factorial of %d is %d",x,ans);
}
int factorial(int z)
{
	if (z>1)
	return z=z* factorial(z-1);
	else
	return 1;// recursion always ha stoping condition
}
