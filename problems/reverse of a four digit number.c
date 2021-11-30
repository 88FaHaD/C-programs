#include <stdio.h>
void main()
{
	int n,r;
	printf("Enter a four digit number ");
	scanf("%d",&n);
	r=n%10;
	n=n/10;
	r=(r*10)+(n%10);
	n=n/10;
	r=(r*10)+(n%10);
	n=n/10;
	r=(r*10)+n;
	printf("\nReverse is  %d ",r);
	getch();
	
}
