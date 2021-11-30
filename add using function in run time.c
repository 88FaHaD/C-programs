// use function to add two integers
#include<stdio.h>
int add(int,int);
int main()
{
	int a,b;
	int sum;
	printf("Enter two integers");
	scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("the addition of two integers %d and %d is %d ",a,b,sum);
}
int add(int x,int y )
{
	int s;
	s=x+y;
	return s;
}
