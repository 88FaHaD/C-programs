//program to find greater of two integers using functions
#include<stdio.h>
int greater(int,int); //function declaration
int main()
{
	int a=10,b=5;
	int max;
	max=greater(a,b);
	printf("the grater integer is %d",max);
	
}
int greater(int x, int y)// function definition
{
	int g;
	if(x>y)
	g=x;
	else
	g=y;
	return  g;
}
	
	
