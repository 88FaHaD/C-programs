#include <stdio.h>
#include <conio.h>
void main()
{
	float p,r,t;
	printf("Enter principal,rate of interest,time  ");
	scanf("%f%f%f",&p,&r,&t);
	printf("\nsimple interest is %f",(p*r*t)/100);
	getch();
}
