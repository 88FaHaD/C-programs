//ternary operator check which is larger integer in two :
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter any two integers");
	scanf("%d%d",&a,&b);
	a>b? printf("a is greater then b") : printf("a is smaller then b or may be equal");
	a=b? printf("\na is equal to b");
}
