#include <stdio.h>
void main()
{
	int z,sum=0;
	printf("Enter a five digit number  ");
	scanf("%d",&z);
	sum=sum+(z%10);
	z=z/10;
	sum=sum+(z%10);
	z=z/10;
	sum=sum+(z%10);
    z=z/10;
    sum=sum+(z%10);
    z=z/10;
    sum=sum+z;
    printf("\nSum of five digit number is %d",sum);
}
