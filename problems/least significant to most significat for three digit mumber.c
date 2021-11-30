#include <stdio.h>
void main()
{
	int z;
	printf("Enter any three digit number  ");
	scanf("%d",&z);
	printf("\n%d",z%10);
	z=z/10;
	printf("\n%d",z%10);
	z=z/10;
	printf("\n%d",z);
	getch();
}
