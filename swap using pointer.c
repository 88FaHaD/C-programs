// swap uning pointer and function
#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a=10,b=20;
	swap(&a,&b);
	printf("%d %d",a,b);
	
}
void swap(int *m,int *n)
{
	int temp;
	temp=*m;
	*m=*n;
	*n=temp;
    
}
