#include <stdio.h>
void main()
{
	int P,C,M;
	printf("enter marks of Physics, Chemistry and Maths ");
	scanf("%d%d%d",&P,&C,&M);
	printf("\nPercentage marks are %f",((float)(P+C+M)/300)*100);
	getch();
}
