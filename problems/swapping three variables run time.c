#include <stdio.h>
void main()
{ 
int C,D,X;
printf("Enter two numbers  ");
scanf("%d%d",&C,&D);
printf("\nBefore swapping");
printf("\nC=%d,D=%d",C,D);
X=C;
C=D;
D=X;
printf("\nAfter swapping");
printf("\nC=%d,D=%d",C,D);
getch();
}


