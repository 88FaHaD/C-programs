#include <stdio.h>
#include <conio.h>
void main()
{ 
float p,r,t,si;
printf("Enter principal, rate of interest ,time  ");
scanf("%f%f%f",&p,&r,&t);
si=(p*r*t)/100;
printf("Simple interest is%f",si);
getch();
}
